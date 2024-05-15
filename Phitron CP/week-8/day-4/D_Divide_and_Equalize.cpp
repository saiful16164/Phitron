#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;


void solve()
{
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    map<int ,int> cnt;
    for(int j =0;j<n;j++)
    {
        for(int i=2;i*i<=a[j];i++)
        {
            if(a[j] % i == 0)
            {
                while(a[j] % i == 0)
                {
                cnt[i]++;
                a[j]/=i;
                }
            }
        }
        if(a[j] >1)
        {
            cnt[a[j]]++;
        }
    }
    bool ok=true;
        for(auto it : cnt)
        {
            if(it.second%n != 0) {ok = false;
            break;
            }
        }
        if(ok) cout<<"YES\n";
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