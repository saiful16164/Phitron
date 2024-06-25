#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define all(c) (c).begin(), (c).end()
#define inf 2e9
#define mod 1000000007
#define N 200005
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, sx, sy, d;
        cin >> n >> m >> sx >> sy >> d;
        
        int top = max(1, sx - d);
        int left = max(1, sy - d);
        int right = min(m, sy + d);
        int bottom = min(n, sx + d);
        int ans = n + m - 2;
        
        if ((top > 1 && right < m) || (left > 1 && bottom < n)) 
            cout << ans << "\n";
        else 
            cout << "-1\n";
    }
    
    return 0;
}
