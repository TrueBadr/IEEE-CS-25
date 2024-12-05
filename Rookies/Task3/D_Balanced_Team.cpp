#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int n;cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    ll ans=0;
    ll i=0,x=1;
    for(ll j=0;j<n;j++)
    {
        while(a[j]-a[i]>5)
        {
            i++;
        }
        ans=max(ans,j-i+1);
    }
    cout<<ans<<endl;
    return 0;
}
// "Failure is another stepping stone to greatness."

// It's fine to celebrate success, but it is more important to heed the lessons of failure.

//“Competition is the fuel that ignites innovation.”
