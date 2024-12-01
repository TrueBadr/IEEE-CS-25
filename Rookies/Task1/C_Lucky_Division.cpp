#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
int main()
{
    //  freopen("mex.in","r",stdin);
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int a[]={4,7,44,47,74,77,444,447,477,777,747,744,474,774};
    bool flag=false;
    int n;cin>>n;
    for(int i=0 ; i< 14 ; i++)
    {
    if(n%a[i]==0)
    {
        flag=true;
        break;
    }
    }
    if(flag)cout<<"YES";
    else cout<<"NO";



    return 0;
}
// "Failure is another stepping stone to greatness."

// It's fine to celebrate success, but it is more important to heed the lessons of failure.

//“Competition is the fuel that ignites innovation.”
