#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

double mod360(double x) {
    while (x < 0) x += 360;
    while (x >= 360) x -= 360;
    return x;
}

int main() {
    int hr, min;
    char c;
    cin >> hr >> c >> min;
    int Q;
    cin >> Q;
    int A, B, X, Y;
    cin >> A >> B >> X >> Y;
    vector<int> query(Q);
    for (int i = 0; i < Q; i++) cin >> query[i];

    double init_hr_deg = (hr % 12) * 30.0;
    double init_min_deg = min * 6.0;
    double diff = fabs(init_hr_deg - init_min_deg);
    if (diff > 180) diff = 360 - diff;

    int total = 0;
    for (int k = 0; k < Q; k++) {
        int ang = query[k];
        int best = 1e9;
        for (int h_move = 0; h_move < 12; h_move++) {
            for (int dir1 = -1; dir1 <= 1; dir1 += 2) {
                double new_hr = mod360(init_hr_deg + dir1 * h_move * 30);
                for (int dir2 = -1; dir2 <= 1; dir2 += 2) {
                    vector<double> mins;
                    for (int sol = -1; sol <= 1; sol += 2) {
                        double want = mod360(new_hr + sol * ang);
                        double cw = mod360(want - init_min_deg);
                        double ccw = mod360(init_min_deg - want);
                        mins.push_back(cw);
                        mins.push_back(-ccw);
                    }
                    for (double move_min : mins) {
                        double new_min = mod360(init_min_deg + move_min);
                        double d = fabs(new_hr - new_min);
                        if (d > 180) d = 360 - d;
                        if (abs(d - ang) > 1e-6) continue;
                        int min_cost = 1e9;
                        if (h_move == 0 && abs(move_min) < 1e-6) min_cost = 0;
                        else {
                            int degs_h = abs(h_move * 30);
                            int degs_m = int(round(fabs(move_min)));
                            int dir_h = dir1 == 1 ? A : B;
                            int dir_m = move_min > 0 ? A : B;
                            int cost_h = degs_h * X * dir_h;
                            int cost_m = degs_m * Y * dir_m;
                            min_cost = cost_h + cost_m;
                        }
                        if (min_cost < best) best = min_cost;
                    }
                }
            }
        }
        total += best == 1e9 ? 0 : best;
        for (int h_move = 0; h_move < 12; h_move++) {
            for (int dir1 = -1; dir1 <= 1; dir1 += 2) {
                double new_hr = mod360(init_hr_deg + dir1 * h_move * 30);
                for (int sol = -1; sol <= 1; sol += 2) {
                    double want = mod360(new_hr + sol * ang);
                    double cw = mod360(want - init_min_deg);
                    double ccw = mod360(init_min_deg - want);
                    for (double move_min : {cw, -ccw}) {
                        double new_min = mod360(init_min_deg + move_min);
                        double d = fabs(new_hr - new_min);
                        if (d > 180) d = 360 - d;
                        if (abs(d - ang) > 1e-6) continue;
                        int min_cost = 1e9;
                        if (h_move == 0 && abs(move_min) < 1e-6) min_cost = 0;
                        else {
                            int degs_h = abs(h_move * 30);
                            int degs_m = int(round(fabs(move_min)));
                            int dir_h = dir1 == 1 ? A : B;
                            int dir_m = move_min > 0 ? A : B;
                            int cost_h = degs_h * X * dir_h;
                            int cost_m = degs_m * Y * dir_m;
                            min_cost = cost_h + cost_m;
                        }
                        if (min_cost == best) {
                            init_hr_deg = new_hr;
                            init_min_deg = new_min;
                            goto nextq;
                        }
                    }
                }
            }
        }
        nextq:;
    }
    cout << total << endl;
    return 0;
}
