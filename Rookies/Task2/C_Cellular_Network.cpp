#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int n,m;cin>>n>>m;
    vector<ll>a(n),b(m);

    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<m;i++)cin>>b[i];

    ll ans= 0;
    
    for(ll i=0;i<n;i++)
    {
    ll s=0,e=m-1;
       while (s <= e) 
    {
        ll mid=s+(e-s)/2;

        if (b[mid]<a[i])s = mid+1; 
        
        else e = mid-1;
    }
      ll disl=LLONG_MAX,disr=LLONG_MAX;

      if(s < m )disl=abs(a[i]-b[s]);

      if(s > 0)disr=abs(a[i]-b[s-1]);


      ans=max(ans,min(disl,disr));
    }
    cout<<ans<<endl;
    return 0;
}
// "Failure is another stepping stone to greatness."

// It's fine to celebrate success, but it is more important to heed the lessons of failure.

//“Competition is the fuel that ignites innovation.”
