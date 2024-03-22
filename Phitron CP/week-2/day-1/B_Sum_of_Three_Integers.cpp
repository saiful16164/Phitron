#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int K,S;
    cin >> K >> S;


   int ans = 0;

    for(int x = 0; x <= K; ++x)
    {
        for(int y = 0; y <= K; ++y)
        {
            int z = S - x - y;
            if(0 <= z and z <= K)
            {
            ans = ans + 1;
            }
        }
    }

     cout << ans << endl;
}

int main()
{
    
        solve();

    return 0;
}