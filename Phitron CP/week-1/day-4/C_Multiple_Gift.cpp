#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll m, n; 
    cin >> m >> n;
    if (m == 0) {
        cout << "0" << endl;
        return;
    }
    
    ll cnt = 0;
    ll i = 1;
    ll an = m;
    while (n >= an)
    {
        an = m * pow(2, i);
        cnt++;
        i++;
    }
    cout << cnt << endl;
}

int main()
{
    solve();
    return 0;
}
