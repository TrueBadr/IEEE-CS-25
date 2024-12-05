
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int n;cin>>n;
    int key;cin>>key;
    int a[n];
    for(int i=0 ; i<n; i++)cin>>a[i];
    int sum=0;
    int cnt=0;
    int r=0;
    for (int i =0; i<n;i++) 
    {
        while( r<n && sum+a[r]<=key ) 
        {
            sum+=a[r];
            r++;
        }
        cnt=max(cnt,r-i);
        sum-=a[i];
    }
    cout<<cnt;
    return 0;
}
// "Failure is another stepping stone to greatness."

// It's fine to celebrate success, but it is more important to heed the lessons of failure.

//“Competition is the fuel that ignites innovation.”
