#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<string> a(n);
    for (int i = 0; i < n; i++)cin >> a[i];
    queue<pair<int, int>> q;
    int x, y;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 'M') {
                q.push({i, j});
            } else if (a[i][j] == 'A') {
                x = i, y = j;
            }
        }
    }
    q.push({x, y});
    int nex[1005][1005];
    nex[x][y] = -1;
    int fx[] = {-1, 1, 0, 0};
    int fy[] = {0, 0, 1, -1};
    char go[] = {'U', 'D', 'R', 'L'};

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        if (a[x][y] == 'A' && (x == 0 || x == n - 1 || y == 0 || y == m - 1)) {
            cout << "YES" << endl;
            string ans;
            int d = nex[x][y];
            while (d != -1) {
                ans += go[d];
                x -= fx[d];
                y -= fy[d];
                d = nex[x][y];
            }
            reverse(ans.begin(), ans.end());
            cout << ans.size() << endl;
            cout << ans;
            return 0;
        }
        for (int i = 0; i < 4; i++) {
            int xx = x + fx[i], yy = y + fy[i];
            if (xx < 0 || xx >= n || yy < 0 || yy >= m || a[xx][yy] != '.') {
                continue;
            }
            a[xx][yy] = a[x][y];
            if (a[xx][yy] == 'A') {
                nex[xx][yy] = i;
            }
            q.push({xx, yy});
        }
    }
    cout << "NO";
    return 0;
}
// Failure is another stepping stone to greatness.
// It's fine to celebrate success, but it is more important to heed the lessons of failure.
// Competition is the fuel that ignites innovation.