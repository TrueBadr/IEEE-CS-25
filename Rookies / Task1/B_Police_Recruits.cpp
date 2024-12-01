#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
int main()
{
    //  freopen("mex.in","r",stdin);
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int cnt=0;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==-1)
        {
            cnt++;
        }
        else
        {
            cnt-=a[i];
        }
        ans=max(ans,cnt);
    }
    if(ans<0)ans=0;
    cout<<ans;


    return 0;
}
// "Failure is another stepping stone to greatness."

// It's fine to celebrate success, but it is more important to heed the lessons of failure.

//“Competition is the fuel that ignites innovation.”
