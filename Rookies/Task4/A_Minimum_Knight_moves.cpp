#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int m[8][2]{ {2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2} };
    int tt;cin>>tt;
    while(tt--)
    {
        string s,e;cin>>s>>e;
        if(s==e)cout<<"0"<<endl;
        else
        {
           int sx=s[0]-'a',sy=s[1]-'1';
           int ex=e[0]-'a',ey=e[1]-'1';
           queue<pair<int,int>>q;
           q.push({sx,sy});
           bool visited [8][8]={};
           visited[sx][sy]=1;
           bool flag=0;
           int ans=0;
           while(!q.empty() && !flag)
           {
            int len=q.size();
            while(len--)
            {
             int x=q.front().first,y=q.front().second;q.pop();
             for(int i=0;i<8;i++)
             {
                int nx=x+m[i][0],ny=y+m[i][1];
                if(nx==ex && ny == ey)
                {
                    cout<<ans+1<<endl;
                    flag=true;
                    break;
                }
                if(nx>=0 && nx<8 && ny>=0 && ny<8 && !visited[nx][ny])
                {
                    visited[nx][ny]=1;
                    q.push({nx,ny});
                }
             }
             if(flag)break;
            }
            ans++;
           }
        }
    }


    return 0;
}
// "Failure is another stepping stone to greatness."

// It's fine to celebrate success, but it is more important to heed the lessons of failure.

//“Competition is the fuel that ignites innovation.”
