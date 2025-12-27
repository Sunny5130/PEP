#include <iostream>
#include <queue>
#include <vector>
#include <tuple>
#include <set>
using namespace std;

int m, n;
vector<vector<char>> a;

struct State {
    int x1, y1, x2, y2, d, c;
    bool operator<(const State &s) const {
        return tie(x1, y1, x2, y2, d) < tie(s.x1, s.y1, s.x2, s.y2, s.d);
    }
};

bool ok(int x, int y) {
    return x >= 0 && x < m && y >= 0 && y < n && a[x][y] != 'H';
}

int main() {
    cin >> m >> n;
    a = vector<vector<char>>(m, vector<char>(n));
    int sx1, sy1, sx2, sy2, sd, ex1, ey1, ex2, ey2, ed;
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            cin >> a[i][j];
    bool found = false;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (a[i][j] == 's') {
                if (j + 1 < n && a[i][j + 1] == 's') {
                    sx1 = i; sy1 = j; sx2 = i; sy2 = j + 1; sd = 0;
                } else if (i + 1 < m && a[i + 1][j] == 's') {
                    sx1 = i; sy1 = j; sx2 = i + 1; sy2 = j; sd = 1;
                }
            }
            if (a[i][j] == 'S') {
                if (j + 1 < n && a[i][j + 1] == 'S') {
                    ex1 = i; ey1 = j; ex2 = i; ey2 = j + 1; ed = 0;
                } else if (i + 1 < m && a[i + 1][j] == 'S') {
                    ex1 = i; ey1 = j; ex2 = i + 1; ey2 = j; ed = 1;
                }
            }
        }
    }
    queue<State> q;
    set<tuple<int, int, int, int, int>> vis;
    q.push({sx1, sy1, sx2, sy2, sd, 0});
    vis.insert({sx1, sy1, sx2, sy2, sd});
    int dx[] = {0, 1, 0, -1};
    int dy[] = {1, 0, -1, 0};
    while (!q.empty()) {
        State s = q.front(); q.pop();
        if ((s.x1 == ex1 && s.y1 == ey1 && s.x2 == ex2 && s.y2 == ey2 && s.d == ed) || (s.x1 == ex2 && s.y1 == ey2 && s.x2 == ex1 && s.y2 == ey1 && s.d == ed)) {
            cout << s.c << endl;
            return 0;
        }
        for (int dir = 0; dir < 4; ++dir) {
            int nx1 = s.x1 + dx[dir], ny1 = s.y1 + dy[dir];
            int nx2 = s.x2 + dx[dir], ny2 = s.y2 + dy[dir];
            if (ok(nx1, ny1) && ok(nx2, ny2) && !vis.count({nx1, ny1, nx2, ny2, s.d})) {
                q.push({nx1, ny1, nx2, ny2, s.d, s.c + 1});
                vis.insert({nx1, ny1, nx2, ny2, s.d});
            }
        }
        if (s.d == 0) {
            if (s.x1 + 1 < m && s.x2 + 1 < m && ok(s.x1 + 1, s.y1) && ok(s.x2 + 1, s.y2)) {
                if (ok(s.x1 + 1, s.y1 + 1) && ok(s.x1, s.y1 + 1)) {
                    if (!vis.count({s.x1, s.y1, s.x1 + 1, s.y1, 1})) {
                        q.push({s.x1, s.y1, s.x1 + 1, s.y1, 1, s.c + 1});
                        vis.insert({s.x1, s.y1, s.x1 + 1, s.y1, 1});
                    }
                }
                if (ok(s.x2 + 1, s.y2 - 1) && ok(s.x2, s.y2 - 1)) {
                    if (!vis.count({s.x2, s.y2, s.x2 + 1, s.y2, 1})) {
                        q.push({s.x2, s.y2, s.x2 + 1, s.y2, 1, s.c + 1});
                        vis.insert({s.x2, s.y2, s.x2 + 1, s.y2, 1});
                    }
                }
            }
        } else {
            if (s.y1 + 1 < n && s.y2 + 1 < n && ok(s.x1, s.y1 + 1) && ok(s.x2, s.y2 + 1)) {
                if (ok(s.x1 + 1, s.y1 + 1) && ok(s.x1 + 1, s.y1)) {
                    if (!vis.count({s.x1, s.y1, s.x1, s.y1 + 1, 0})) {
                        q.push({s.x1, s.y1, s.x1, s.y1 + 1, 0, s.c + 1});
                        vis.insert({s.x1, s.y1, s.x1, s.y1 + 1, 0});
                    }
                }
                if (ok(s.x2 - 1, s.y2 + 1) && ok(s.x2 - 1, s.y2)) {
                    if (!vis.count({s.x2, s.y2, s.x2, s.y2 + 1, 0})) {
                        q.push({s.x2, s.y2, s.x2, s.y2 + 1, 0, s.c + 1});
                        vis.insert({s.x2, s.y2, s.x2, s.y2 + 1, 0});
                    }
                }
            }
        }
    }
    cout << "Impossible" << endl;
    return 0;
}
