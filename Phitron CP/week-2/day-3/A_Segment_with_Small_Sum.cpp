#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;


void solve()
{
    ll n,s;
    cin>>n>>s;
    ll ar[n];
    for(int i=0;i<n;i++)
    {
        cin >> ar[i];
    }
    
    ll l=0,r=0,sum =0;
    ll ans=0;
    while(r < n)
    {
        sum += ar[r];
        if(sum<=s)
        {
            ans= max(ans,r-l+1);
        } 
        else{
            sum -=ar[l];
            l++;
        }
        r++;
    }
    cout <<ans<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

        solve();

    return 0;
}