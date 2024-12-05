    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define ld long double
    int main()
    {
        ios_base::sync_with_stdio(false);cin.tie(nullptr);
        int n;cin>>n;
        ll d;cin>>d;
        ll a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        ll ans=0;
        int l=0,r=0;
        while(l<n)
        {
            while(r<n && a[r]-a[l]<=d )r++;
            ll len=r-l-1;
            ans+=(len*(len-1))/2; 
            l++;
        }        
        cout<<ans<<endl;
        return 0;
    }
    // "Failure is another stepping stone to greatness."

    // It's fine to celebrate success, but it is more important to heed the lessons of failure.

    //“Competition is the fuel that ignites innovation.”