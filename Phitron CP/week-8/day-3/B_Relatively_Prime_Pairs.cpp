// #include<bits/stdc++.h>
// #define ll long long
// #define endl '\n'
// using namespace std;

// int gcd(int a,int b)
// {
//     if(a%b == 0 ) return b;
//     return gcd(b,a%b);
// }
// void solve()
// {
//     ll l,r; cin>>l>>r;
//     cout<<"YES\n";
//     while(l<r)
//     {
//        cout<<l++<<" "<<l++ <<endl;
//     }
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     {
//         solve();
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long l,r;
    cin>>l>>r;
    cout<<"YES\n";
    while(l<r)
    {
        cout<<l++<<" "<<l++<<'\n';
    }
}
