#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    vector<int> adj[101];
    int cost[101][101];
    int vis[101];
    int n;cin >> n;
    for (int i = 0; i < n - 1; i++) 
    {
        int a, b, c; 
        cin >> a >> b >> c;
        adj[a].push_back(b);
        adj[b].push_back(a);
        cost[a][b] = cost[b][a] = c;
    }
    memset(vis, 0, sizeof(vis));
    stack<pair<int, int>> st;
    st.push({0, 0});
    vis[0] = 1;
    int max_cost = 0;
    while (!st.empty()) {
        auto [u, current_cost] = st.top();
        st.pop();
        max_cost = max(max_cost, current_cost);
        for (int v : adj[u]) 
        {
            if (!vis[v]) 
            {
                vis[v] = 1;
                st.push({v, current_cost + cost[u][v]}); 
            }
        }
    }
    cout << max_cost << endl;
    return 0;
}