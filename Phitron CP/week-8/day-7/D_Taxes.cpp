/*TGS*/
#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define lcm(a, b) ((a/__gcd((a), (b)))*b)
using namespace std;
bool Is_Prime(ll n)
{
    if(n==1) return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    int n; cin>>n;
    if(Is_Prime(n)) cout<<1<<nl;
    else if(n%2 ==0 ) cout<<2<<nl;
    else{
        if(Is_Prime(n-2)) cout<<2<<nl;
        else cout<<3<<nl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}