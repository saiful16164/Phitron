#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;


void solve()
{
  int n; cin>>n;
  string s,t; cin>>s>>t;
  bool ans = true;
  for(int i=0;i<n;i++)
  {
    if(s[i] == 'R' || t[i] == 'R')
    {
        if(s[i]!=t[i])
        {
            ans = false;
        }
    }
  } 
  if(ans) cout<<"YES\n";
  else cout<<"NO\n"; 
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