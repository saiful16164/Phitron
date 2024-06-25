#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll f(ll a,ll b){
  ll le=(a*(a-1))/2,ri=(b*(b+1))/2;
  return ri-le;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc=1,tc1=1;
    cin>>tc;
    up:
    while(tc--){
      ll n,a,b;
      cin>>n>>a>>b;
      if(a>=b){
        cout<<n*a<<'\n';
      }
      else {
        if(b-n<=a){
          ll ans=f(a,b);
          ll baki=n-(b-a)-1;
          ans+=(baki*a);
          cout<<ans<<'\n';
        }
        else {
          ll x=b-n+1;
          cout<<f(x,b)<<'\n';
        }
      }
    }
}
