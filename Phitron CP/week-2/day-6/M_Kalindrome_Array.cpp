#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
vector <int> a; 
bool ans;
bool check(int in)
{
    vector <int> v;
    for(int i=0;i<a.size();i++)
    {
        if(a[i] == in) continue;
        v.push_back(a[i]);
    }
    int n = v.size();
    for(int i=0;i<n/2;i++)
    {
        if(v[i] !=v[n-i-1])
        {
            return false;
        }
    }
    
    return true;
}
void solve()
{
    int n;
    cin>>n;
    a.clear();
    for(int i=0;i<n;i++)
    {
        int s; cin>>s;
        a.push_back(s);
    }
    ans = true;
    int x,y;
    for(int i=0;i<n/2;i++)
    {
        if(a[i] !=a[n-i-1])
        {
            ans = false;
            x=a[i];
            y=a[n-i-1];
            break;
        }
    }
    if(ans) cout<<"YES\n";
    else 
    {
        ans = check(x) || check(y);
        if(ans) cout<<"YES\n";
        else cout<<"NO\n";
    }
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
