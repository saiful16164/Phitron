// #include<bits/stdc++.h>
// #define ll long long
// #define endl '\n'
// using namespace std;
// const int M = 1e6 + 9;
// bool pr[M];
// void sieve() {
//   pr[1] = false;
//   for(int i = 2; i < M; i++) {
//     pr[i] = true;
//   }
//   for(int i = 2; i < M; i++) {
//     if(pr[i]) {
//       for(int j = i + i; j < M; j += i) {
//         pr[j] = false;
//       }
//     }
//   }
// }
// bool IsTprime(int n)
// {
//     int cnt=0;
//     for(int i=0;i<M;i++)
//     {
//        if(pr[i])
//        {
//         if(n%i) cnt++;
//        }
//     }
//     if(cnt > 1)
//     {
//         return false;
//     }
//     else return true;
    
// }

// void solve()
// {
//     int n; cin>>n;
//     int ar[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>ar[i];
//     }
//     for(int i=0;i<n;i++)
//     {
//         bool t = IsTprime(ar[i]);
//         if(t) cout<<"YES"<<endl;
//         else cout<<"NO"<<endl;
//     }

// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
    
//         solve();
    
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[1000000];
int main()
{
   ll i,j,p,p1,b;
   a[1]=1;
   for(i=2; i<=1000; i++)
   {
       if(a[i]==0)
       {
           for(j=i+i; j<=1000000; j=j+i)
           {
               a[j]=1;
           }
       }
   }
   ll n;
   cin>>n;
   for(i=1; i<=n; i++)
   {
       cin>>b;
       p1=sqrt(b);
       if((p1*p1)==b && a[p1]==0)
       {
           cout<<"YES"<<endl;
       }
       else
        cout<<"NO"<<endl;
   }
}