#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n, m; cin >> n >> m;
    vector<vector<char>> a(n, vector<char>(m));
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++) 
            cin >> a[i][j];

    vector<vector<bool>> visited(n, vector<bool>(m, false));
    int ans = 0;
    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == '.' && !visited[i][j]) {
                queue<pair<int, int>> q;
                q.push({i, j});
                visited[i][j] = true;
                while (!q.empty()) {
                    pair<int, int> p = q.front();
                    q.pop();
                    int cx = p.first, cy = p.second;
                    for (int k = 0; k < 4; k++) {
                        int nx = cx + dx[k];
                        int ny = cy + dy[k];
                        if (nx >= 0 && nx < n && ny >= 0 && ny < m && a[nx][ny] == '.' && !visited[nx][ny]) {
                            visited[nx][ny] = true;
                            q.push({nx, ny});
                        }
                    }
                }
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
// "Failure is another stepping stone to greatness."

// It's fine to celebrate success, but it is more important to heed the lessons of failure.

//“Competition is the fuel that ignites innovation.”
