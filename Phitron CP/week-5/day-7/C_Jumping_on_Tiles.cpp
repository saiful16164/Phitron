#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

void solve()
{
    string s; cin>>s;
    int n = s.size();
    vector <pair<char,int>> order;
    char mx = max(s[0],s[n-1]);
    char mn = min(s[0],s[n-1]);
    for(int i=0;i<n;i++)
    {
        if(s[i] >= mn and s[i] <= mx)
        order.push_back({s[i],i});
    }
    // sort(order.begin(),order.end(),[&](pair<char,int>a,pair<char,int>b){
    //     return a.second < b.second;
    // });
    if(order.size() >2)
    {
        sort(order.begin()+1,order.end()-1,[&](pair<char,int>a,pair<char,int>b){
        if(s[0]>s[n-1]) return a.first > b.first;
        else return a.first < b.first;
    });
    }
    ll cost=0;
    vector<int> seq;
    seq.push_back(1);
    for(int i=1; i<order.size();i++)
    {
        cost+= abs(order[i-1].first - order[i].first);
        seq.push_back(order[i].second+1);
    }
    cout<<cost<<" "<<seq.size()<<endl;
    for(auto i:seq)
    {
        cout<<i<<" ";
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