#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

void solve()
 {
    int n; cin>>n;
    set <int> st;
    for(int i=0;i<n;i++)
    {
        int a; cin>>a;
        st.insert(a);
    }
    if((n-st.size())%2 == 0)
    {
        cout<<st.size()<<endl;
    }
    else cout<<st.size()-1<<endl;
}

int main()
 {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) 
    {
        solve();
    }
    return 0;
}
