#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;


void solve()
{
    int n,m; cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int mx =0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int sum =0;
            int ti=i,tj=j;
            while(ti >=0 && ti < n && tj >=0 && tj < m)
            {
                sum += a[ti][tj];
                ti++;
                tj++;
            }
             ti=i,tj=j;
             while(ti >=0 && ti < n && tj >=0 && tj < m)
            {
                sum += a[ti][tj];
                ti--;
                tj++;
            }
            ti=i,tj=j;
             while(ti >=0 && ti <n && tj >=0 && tj <m)
            {
                sum += a[ti][tj];
                ti++;
                tj--;
            }
            ti=i,tj=j;
             while(ti >=0 && ti <n && tj >=0 && tj <m)
            {
                sum += a[ti][tj];
                ti--;
                tj--;
            }
            sum -=a[i][j]*3; 
            mx = max(mx,sum);
        }
    }
     
    cout<<mx<<endl;
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