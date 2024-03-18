#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n; cin>>n;
    ll sum =0;
    for(ll i =0;i<n-1;i++)
    {
        ll m; cin>>m;
        sum += m;
    }
    ll sum1 = (n*(n+1))/2;
    cout<<sum1-sum<<endl;
    
}

int main()
{
        solve();

    return 0;
}