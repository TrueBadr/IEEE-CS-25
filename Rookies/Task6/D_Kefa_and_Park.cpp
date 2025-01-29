#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
int main() 
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    ll n, k;cin>>n>>k;
    ll ans = 0;
    ll a[100005];
    vector<ll>v[100005];
    bool vis[100005] = {};
    for (int i = 1; i <= n; i++)cin>>a[i];
    for (int i = 0; i < n - 1; i++)
    {
        ll x, y;cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    stack<pair<ll, ll>> st;
    st.push({1, 0});
    vis[1] = 1;
    while (!st.empty()) 
    {
        auto [s, cnt] = st.top(); st.pop();
        if (a[s]) cnt++;
        else cnt = 0;

        if (cnt > k) continue;
        bool isLeaf = true;
        for (auto i : v[s]) 
        {
            if (!vis[i])
            {
                vis[i] = 1;
                st.push({i, cnt});
                isLeaf = false;
            }
        }
        if (isLeaf && s != 1) ans++;
    }
    cout << ans << endl;
    return 0;
}
