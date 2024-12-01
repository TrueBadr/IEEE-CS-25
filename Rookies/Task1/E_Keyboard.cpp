#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
int main()
{
    //  freopen("mex.in","r",stdin);
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    
    string help="qwertyuiopasdfghjkl;zxcvbnm,./";
    char c;cin>>c;
    string s;cin>>s;
    if(c=='R')
    {
        for(int i=0;i<s.size();i++)
        {
            for(int j=0;j<help.size();j++)
            {
                if(s[i]==help[j])
                {
                    cout<<help[j-1];
                    break;
            }
        }
    }
    }
    else
    {
        for(int i=0;i<s.size();i++)
        {
            for(int j=0;j<help.size();j++)
            {
                if(s[i]==help[j])
                {
                    cout<<help[j+1];
                    break;
                }
            }
        }
    }



    return 0;
}
// "Failure is another stepping stone to greatness."

// It's fine to celebrate success, but it is more important to heed the lessons of failure.

//“Competition is the fuel that ignites innovation.”
