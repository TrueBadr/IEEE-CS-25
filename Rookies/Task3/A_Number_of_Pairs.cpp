#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
     int tt;cin>>tt;
     while(tt--)
     {
        ll n,l,r;cin>>n>>l>>r;
        ll a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        ll cnt=0;
        for(int i = 0,j = n-1; i < j; i++)
        {
			while(i<j && a[i]+a[j]>r)j--;
			cnt+=j-i;
		}
		for(int i = 0, j = n-1; i < j; i++)
        {
			while(i<j && a[i]+a[j]>=l)j--;
            cnt-=j-i;
		}
        cout<<cnt<<endl;
     }



    return 0;
}
// "Failure is another stepping stone to greatness."

// It's fine to celebrate success, but it is more important to heed the lessons of failure.

//“Competition is the fuel that ignites innovation.”
