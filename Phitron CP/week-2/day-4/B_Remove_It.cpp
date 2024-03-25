#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;


void solve()
{
    ll n,x; cin>>n>>x;
    vector <ll> a;
    for(int i=0;i<n;i++)
    {
        ll an; cin>> an;
        if(an!=x)
        {
            a.push_back(an);
        }
    }
    for(ll i:a)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
        solve();

    return 0;
}