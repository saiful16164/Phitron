/*TGS*/
#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define lcm(a, b) ((a/__gcd((a), (b)))*b)
using namespace std;
void solve()
{
    ll n,a,b,p,q; cin>>n>>a>>b>>p>>q;
    ll ans=0; 
    ans+=(n/a)*p;
    ans+=(n/b)*q;
    ans-=(n/lcm(a,b))*(p+q);
    ans+=(n/lcm(a,b))*(max(p,q));
    cout<<ans<<endl;

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}