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
    int big=0,small=105,find=0,lind=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>big)
        {
            big=a[i];
            find=i;
        }
        if(a[i]<=small)
        {
            small=a[i];
            lind=i;
        }
    }
    cout<<find+(n-1-lind)-(find>lind);


    return 0;
}
// "Failure is another stepping stone to greatness."

// It's fine to celebrate success, but it is more important to heed the lessons of failure.

//“Competition is the fuel that ignites innovation.”
