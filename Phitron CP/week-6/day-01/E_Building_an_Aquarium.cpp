#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

void solve()
{
    ll n,water_units; cin>>n>>water_units;
    vector <ll> blocks_ht(n);
    for(int i=0;i<n;i++) cin>>blocks_ht[i];
    ll r = 2'000'000'007;
    ll l=0;
    while(l < r)
    {
        ll total_wt =0;
        ll mid = l+(r-l+1)/2;
        for(int i=0;i<n;i++)
        {
            total_wt += max(mid - blocks_ht[i], 0LL);
        }
        if (total_wt <= water_units) {l = mid;} 
		else {r = mid - 1;}
    }
    cout<<l<<endl;
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
// #include <bits/stdc++.h>
 
// using namespace std;
 
// const int MAX = 200'007;
// const int MOD = 1'000'000'007;
 
// void solve() {
// 	int n;
// 	long long x;
// 	cin >> n >> x;
// 	long long a[n];
// 	for (int i = 0; i < n; i++) {
// 		cin >> a[i];
// 	}
// 	long long lo = 0, hi = 2'000'000'007;
// 	while (lo < hi) {
// 		long long mid = lo + (hi - lo + 1) / 2;
// 		long long tot = 0;
// 		for (int i = 0; i < n; i++) {
// 			tot += max(mid - a[i], 0LL);
// 		}
// 		if (tot <= x) {lo = mid;} 
// 		else {hi = mid - 1;}
// 	}
// 	cout << lo << endl;
// }
 
// int main() {
// 	ios::sync_with_stdio(false);
// 	cin.tie(nullptr);
// 	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
// 	// solve();
// }
