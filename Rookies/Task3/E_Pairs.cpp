#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    ll n,k;cin>>n>>k;
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    ll ans=0;
    for(ll i=0;i<n-1;i++)
    {
        for(ll x=i+1;x<n;x++)
        {
            if(a[x]-a[i]==k)
            {
                ans++;
                break;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
// "Failure is another stepping stone to greatness."

// "It's fine to celebrate success, but it is more important to heed the lessons of failure."

// "Competition is the fuel that ignites innovation."
