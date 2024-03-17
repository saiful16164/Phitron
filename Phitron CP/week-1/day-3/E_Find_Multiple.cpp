#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    int y = b/c * c;
    if(a <= y) cout << y <<endl;
    else cout <<-1<<endl;
}

int main()
{
        solve();

    return 0;
}