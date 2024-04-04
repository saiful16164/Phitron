#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;


void solve()
{
    int n; cin>>n;
    vector <string> v(n);
    map <string,bool> mp;
    for(int i=0;i<n;i++)
    {
        string s; cin>>s;
        v[i] = s;
        mp[s] = true;
    }
    for(int i=0;i<n;i++)
    {
        bool an=false;
        for(int j=1;j<v[i].size();j++)
        {
            string s1 = v[i].substr(0,j);
            string s2 = v[i].substr(j);
            if(mp[s1]  && mp[s2])
            {
                an = true;
                break;
            }
        }
        cout<<an;
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