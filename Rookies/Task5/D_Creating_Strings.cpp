#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
void rec(string s, int index , set<string> &a)
{
   if(index==s.size())
   {
    a.insert(s);
    return ;
   }
   for(int i=index;i<s.size();i++)
   {
    swap(s[index], s[i]);
    rec(s,index+1,a);
    swap(s[index], s[i]);
   }

}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    string s;cin>>s;
    set<string>a;
    sort(s.begin(),s.end());
    rec(s,0,a);
    cout<<a.size()<<endl;
    for (string x : a)cout<<x<<endl;
    return 0;
}
// "Failure is another stepping stone to greatness."

// It's fine to celebrate success, but it is more important to heed the lessons of failure.

//“Competition is the fuel that ignites innovation.”
