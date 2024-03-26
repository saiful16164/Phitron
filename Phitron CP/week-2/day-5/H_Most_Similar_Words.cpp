#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
int v(string s,string t)
{
    int val=0;
    for(int i=0;i<s.size();i++)
    {
        val += abs(s[i]-t[i]);
    }
    
    return val;
}
void solve()
{
    int n,m; cin>>n>>m;
    vector <string> s(n);
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    int ans = INT_MAX;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            ans = min(ans,v(s[i],s[j]));
        }
    }
    cout<<ans<<endl;
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