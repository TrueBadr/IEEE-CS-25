#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

void rec(ll n)
{
    cout<<n<<" ";
  if(n==1)return;
  else if(n&1)rec((n*3)+1);
  else rec(n/2);
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    ll n;cin>>n;
    rec(n);
    return 0;
}
// "Failure is another stepping stone to greatness."

// It's fine to celebrate success, but it is more important to heed the lessons of failure.

//“Competition is the fuel that ignites innovation.”
