#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &c : a) cin >> c;
        int mx = 0;
        for (int i = 0; i < n - 1; i++) mx = max(mx, a[i]);
        cout << mx + a[n - 1] << "\n";
    }
    return 0;
}