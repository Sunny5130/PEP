#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <set>
#include <iomanip>
using namespace std;

struct Point {
    int x, y;
    bool operator<(const Point &a) const {
        return x == a.x ? y < a.y : x < a.x;
    }
    bool operator==(const Point &a) const {
        return x == a.x && y == a.y;
    }
};
struct Edge {
    Point a, b;
};

double dist(Point p1, Point p2) {
    return hypot(p1.x - p2.x, p1.y - p2.y);
}

double shoelace(const vector<Point>& poly) {
    int n = poly.size();
    double res = 0;
    for (int i = 0; i < n; ++i)
        res += (poly[i].x * poly[(i + 1) % n].y) - (poly[(i + 1) % n].x * poly[i].y);
    return fabs(res) / 2.0;
}

int main() {
    int n;
    cin >> n;
    vector<Edge> sticks(n);
    map<Point, int> cnt;
    map<Point, vector<Point>> adj;
    vector<bool> used(n, false);
    for (int i = 0; i < n; ++i) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        sticks[i] = {{x1, y1}, {x2, y2}};
        cnt[{x1, y1}]++;
        cnt[{x2, y2}]++;
        adj[{x1, y1}].push_back({x2, y2});
        adj[{x2, y2}].push_back({x1, y1});
    }

    set<Point> closed_pts;
    vector<Point> polygon;
    Point start;
    for (auto &kv: cnt)
        if (kv.second == 2) { start = kv.first; break; }
    Point curr = start, prev = {-1, -1};
    for (int steps = 0; steps < n+2; ++steps) {
        polygon.push_back(curr);
        closed_pts.insert(curr);
        int found = 0;
        for (auto &next : adj[curr]) {
            if (next == prev) continue;
            if (cnt[next] == 2) {
                prev = curr;
                curr = next;
                found = 1;
                break;
            }
        }
        if (!found) break;
        if (curr == start) break;
    }
    bool is_closed = (polygon.size() >= 3 && polygon.front() == polygon.back());
    if (!is_closed) {
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;
    vector<int> used_stick(n, 0);
    for (size_t i = 0; i + 1 < polygon.size(); ++i) {
        for (int j = 0; j < n; ++j) {
            if (!used_stick[j]) {
                if ((polygon[i] == sticks[j].a && polygon[i+1] == sticks[j].b) ||
                    (polygon[i] == sticks[j].b && polygon[i+1] == sticks[j].a)) {
                    used_stick[j] = 1;
                    break;
                }
            }
        }
    }
    double peri = 0;
    for (size_t i = 0; i + 1 < polygon.size(); ++i)
        peri += dist(polygon[i], polygon[i+1]);
    double area = shoelace(polygon);
    vector<double> leftovers;
    for (int i = 0; i < n; ++i)
        if (!used_stick[i])
            leftovers.push_back(dist(sticks[i].a, sticks[i].b));
    double remain = 0;
    for (auto d : leftovers) remain += d;

    cout << (remain + 1e-6 >= peri ? "Yes" : "No") << endl;
    cout << fixed << setprecision(2) << area << endl;
    return 0;
}
