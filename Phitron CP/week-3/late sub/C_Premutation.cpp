#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

void solve()
{
    int n; cin>>n;
    int a[n][n-1];
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            cin>>a[i][j];
            if(j == 0)
            {
                mp[a[i][j]]++;
            }
        }
    }
    int first ,m=-1;
    for(auto it:mp)
    {
        if(it.second > m)
        {
            first = it.first;
            m = it.second;
        }
    }
    vector<int> ss;
    ss.push_back(first);
    for(int i=0,next = first;i<n-1;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[j][i] != next)
            {
                next = a[j][i];
                ss.push_back(a[j][i]);
                break;
            }
        }
    }
    for(auto it:ss)
    {
        cout<<it<<" ";
    }
    cout<<nl;
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
