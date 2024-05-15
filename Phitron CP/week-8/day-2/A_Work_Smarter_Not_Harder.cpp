#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;


void solve()
{
    double l,tv,hv; cin>>l>>tv>>hv;
    double t1 = ceil(l/tv), t2 = ceil(l/hv);
    //cout << t1<<" "<<t2<<" ";
    if( t1 > t2)
    {
        cout<<t1-t2-1<<endl;
    }
    else
    {
        cout<<-1<<endl;
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