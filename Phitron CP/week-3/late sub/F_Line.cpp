#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;


void solve()
{
    ll n; cin>>n;
    string s; cin>>s;
    ll total=0;
    vector <ll> diff;
    ll change =0;
    for(int i=0;i<n;i++)
    {
        ll L = i;
        ll R = n - i - 1;
        if(s[i] == 'L')
        {
            if(L < R)
            {
                total +=R;
                change++;
                diff.push_back(R-L);
            }
            else 
            {
                total +=L;
            }
        }
        else 
        {
            if(R < L)
            {
                total +=L;
                change++;
                diff.push_back(L-R);
            }
            else 
            {
                total+=R;
            }
        }
    }
    vector<ll>ans(n+1);
    for(int i = change;i<=n;i++)
    {
        ans[i] = total;
    }
    sort(diff.begin(),diff.end(),greater<ll>());
    for(int i=change-1;i>=1;i--)
    {
        total -=diff.back();
        diff.pop_back();
        ans[i]=total;
    }
    for(int i =1;i<=n;i++)
    {
        cout<<ans[i]<<" ";
    }
    
    cout<<endl;
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