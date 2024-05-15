#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
ll lcm(ll a, ll b) {
  return (a * b)/ __gcd(a, b);
}

void solve()
{
    ll n; cin>>n;
    vector<ll> d;
    ll ans= 0;
    for(ll i =1;i*i<= n;i++)
    {
        if(lcm(n/i,i) == n)
        {
           ans =i;
        }
    }
    cout<<ans<<" "<<n/ans<<endl;
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}