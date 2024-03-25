#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;


void solve()
{
   string n,m;
   cin>>n>>m;
   int cnt=0;
   for(int i=0;i<n.size();i++)
   {
    if(n[i]!=m[i]) cnt++;
   } 
   cout<<cnt<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    return 0;
}