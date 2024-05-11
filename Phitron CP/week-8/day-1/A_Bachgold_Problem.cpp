#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
void IsPrime(ll n)
{
    vector <bool> prime(n+1,true);
    for(ll i =2;i*i <=n;i++)
    {
        if(prime[i])
        {
            for(ll j = i+i;j<=n;j+=i)
            {
                prime[j] = false;
            }
        }
    }
}

void solve()
{
    ll n; cin>>n;
    vector <ll> ans;
    if(n%2 ==0) 
    {
        cout<<n/2<<endl;
        for(int i = 2;i<=n;i+=2)
            cout<< 2 <<" ";
        cout<<endl;
    }
    else if(n == 3)
    {
        cout <<1 <<endl <<3<<endl;
    }
    else 
    {
        n-=3;
        cout <<(n/2)+1 <<endl;
        for(int i=2;i<=n;i+=2)
        {
            cout<< 2 <<" ";
        }
        cout<<3<<endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    //int t;cin>>t;
    //for(int i=0;i<t;i++)
    {
        solve();
    }
    return 0;
}