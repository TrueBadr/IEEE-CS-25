#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int n;cin>>n;
    int a[n];
   for(int i=0;i<n;i++)cin>>a[i];
   int Alice=0,Bob=0;
   int i=0,x=n-1;
   int sumAlice=a[i],sumBob=a[x];
   while(i<=x)
   {
      if(sumAlice <= sumBob)
      {
          Alice++;
          i++;
          sumAlice+=a[i];
      }
      else
      {
          Bob++;
          x--;
          sumBob+=a[x];
      }
   }
      cout<<Alice<<" "<<Bob;
    return 0;
}
// "Failure is another stepping stone to greatness."

// It's fine to celebrate success, but it is more important to heed the lessons of failure.

//“Competition is the fuel that ignites innovation.”
