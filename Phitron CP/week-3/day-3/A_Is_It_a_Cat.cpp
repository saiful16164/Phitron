#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;


void solve()
{
    int n; cin>>n;
    vector <char> s , ss = {'m','e','o','w'};
    for (int i = 0; i < n; i++) 
    {
        char a; 
        cin >> a;
        if (a >= 'A' && a <= 'Z') {
            a = a + 32;
        }
        s.push_back(a);
    }
    //sort(s.begin(),s.end());
    auto it = unique(s.begin(), s.end());
    s.erase(it, s.end());
    if(s == ss) cout<<"YES\n";
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