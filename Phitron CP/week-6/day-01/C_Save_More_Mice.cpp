#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;


void solve()
{
    ll n,k; cin>>n>>k;
    vector <ll> m_co(k);
    for(int i=0;i<k;i++) cin>>m_co[i];
    sort(m_co.rbegin(),m_co.rend());
    ll cnt=0;
    ll cat_move=0;
    for(int i=0;i<k;i++)
    {
        if(cat_move < m_co[i])
        {
            cat_move+=(n-m_co[i]);
            cnt++;
        }
        else break;
    }
    cout<<cnt<<endl;
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