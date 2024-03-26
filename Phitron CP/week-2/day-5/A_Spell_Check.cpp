#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;


void solve()
{
    int n; cin>>n;
    string s, s1="Timur";
    cin>>s;
    sort(s.begin(),s.end());
    if(s.size() > 5)
    {
        cout<<"NO\n";
        return;
    }
    sort(s1.begin(),s1.end());
    bool ans = true;
    //cout<<s<<" "<<s1<<endl;
    for(int i=0;i<5;i++)
    {
        if(s[i] != s1[i])
        {
            ans = false;
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