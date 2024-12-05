#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    ll n,k;cin>>n>>k;
    ll s=0,e=n,lin=n;

    while(s<=e)
    {
        ll mid = s + (e-s)/2;
        ll now=0;
        ll x=mid;
        while(x)
        {
            now+=x;
            x/=k;
        }
        if(now>=n)
        {
            lin=mid;
            e=mid-1;
        }
        else s=mid+1;
    }
    cout<<lin<<endl;
    return 0;
}
// "Failure is another stepping stone to greatness."

// It's fine to celebrate success, but it is more important to heed the lessons of failure.

//“Competition is the fuel that ignites innovation.”
