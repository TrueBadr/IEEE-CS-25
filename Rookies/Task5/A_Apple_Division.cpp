#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
ll rec (ll i , ll* a , ll yes , ll no , ll size)    
{
    if(i==size)return abs(yes-no);
    ll g1 = rec(i + 1, a, yes + a[i], no, size);
    ll g2  = rec(i + 1, a, yes, no + a[i], size);
    return min(g1,g2);
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    ll n;cin>>n;
    ll a[n];for(ll i=0;i<n;i++)cin>>a[i];
    ll ans=rec(0LL,a,0LL,0LL,n);
    cout<<ans;
    return 0;
}
// "Failure is another stepping stone to greatness."

// It's fine to celebrate success, but it is more important to heed the lessons of failure.

//“Competition is the fuel that ignites innovation.”
