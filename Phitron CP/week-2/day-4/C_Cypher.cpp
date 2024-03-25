#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;


void solve()
{
    int n; cin>>n;
    int ar[n];
    for(int i =0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i =0;i<n;i++)
    {
        int a; cin>>a;
        for(int j=0;j<a;j++)
        {
            char c; cin>>c;
            if(c == 'D')
            {
                ar[i] = ar[i]+1;
                if(ar[i] == 10) ar[i]=0;
                if(ar[i] == -1) ar[i]=9;
            }
            else
            {
                ar[i] = ar[i]-1;
                if(ar[i] == 10) ar[i]=0;
                if(ar[i] == -1) ar[i]=9;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
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