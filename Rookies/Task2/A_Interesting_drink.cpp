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
        int q;cin>>q;
        sort(a,a+n);
        while(q--)
        {
            int x;cin>>x;
            int l=0,r=n-1;
            int ans=0;
            while(l<=r)
            {
                int mid=l + (r-l)/2;
                if(a[mid]<=x)
                {
                    ans=mid+1;
                    l=mid+1;
                }
                else r=mid-1;
            }
            cout<<ans<<endl;
        }
        return 0;
    }
    // "Failure is another stepping stone to greatness."

    // It's fine to celebrate success, but it is more important to heed the lessons of failure.

    //“Competition is the fuel that ignites innovation.”