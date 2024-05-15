#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;


void solve()
{
    int n; cin>>n;
    int ans =INT_MIN;
    cout<<n/2<<endl;
    // for(int i=1;i <= n;i++)
    // {
    //     for(int j =0;j <=n;j++)
    //     {
    //         int cur =__gcd(i,j);
    //         if(cur > ans)
    //         {
    //             ans = cur;
    //         }
    //     }
    // }
    // cout<<ans<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    for(int i=0;i<t;i++)
    {
        solve();
    }
    return 0;
}