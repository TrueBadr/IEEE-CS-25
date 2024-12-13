#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
int rec(int index , vector<int> a , int n , int m , vector<int> s1 , vector<int> e1 , vector<int> cool , 
        vector<int> s2 , vector<int> e2 , vector<int> power  , vector<int> cost , vector<int> stall)
{
    if (index==m)
    {
        for(int i=0;i<n;i++)
        {
            for(int x=s1[i];x<=e1[i];x++)
            {
                if (stall[x]<cool[i])return INT_MAX;
            }
        }
        return 0;
    }
    int now=rec(index+1,stall,n,m,s1,e1,cool,s2,e2,power,cost,stall);
    for (int i=s2[index];i<=e2[index];i++)stall[i]+=power[index];
    int notnow=rec(index+1,stall,n,m,s1,e1,cool,s2,e2,power,cost,stall);
    if (notnow!=INT_MAX)notnow+=cost[index];
    for (int i=s2[index];i<=e2[index];i++)stall[i]-=power[index];
    return min(notnow,now);
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int n,m;cin>>n>>m;
    vector<int>s1(n),e1(n),cool(n),s2(m),e2(m),power(m),cost(m),stall(105);
    for(int i=0;i<n;i++)
    {
        cin>>s1[i]>>e1[i]>>cool[i];
    }
    for(int i=0 ; i<m;i++)
    {
        cin>>s2[i]>>e2[i]>>power[i]>>cost[i];
    }
    cout<<rec(0,stall,n,m,s1,e1,cool,s2,e2,power,cost,stall);
    return 0;
}
// "Failure is another stepping stone to greatness."

// It's fine to celebrate success, but it is more important to heed the lessons of failure.

//“Competition is the fuel that ignites innovation.”
