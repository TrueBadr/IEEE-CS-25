#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
int main()
{
    //  freopen("mex.in","r",stdin);
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    ll n;cin>>n;
    string s;cin>>s;
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    ll cnt=-1;
    for(ll i=0;i<n-1;i++)
    {
        if(s[i]=='R' && s[i+1]=='L')
        {
            int now=(a[i+1]-a[i])/2;
            if(cnt==-1)cnt=now;
            if(now<cnt)cnt=now;
        }
    }
    cout<<cnt<<endl;


    return 0;
}
// "Failure is another stepping stone to greatness."

// It's fine to celebrate success, but it is more important to heed the lessons of failure.

//“Competition is the fuel that ignites innovation.”
