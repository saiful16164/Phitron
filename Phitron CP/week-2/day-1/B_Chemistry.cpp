#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    map <char,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[s[i]]++;
    }
    int odd=0,even =0;
    for(auto it:mp)
    {
        even += (it.second%2 ==0);
        odd += (it.second%2 !=0);
    }
    if(m<odd-1) cout<<"NO\n";
    else cout<<"YES\n";
}

int main()
{
    int t;
    cin >> t;

    while(t--){
        solve();
        //cout<<endl;
    }
    return 0;
}