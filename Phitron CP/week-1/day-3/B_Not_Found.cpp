// #include<bits/stdc++.h>
// using namespace std;

// void solve()
// {
//     string s; cin>>s;
//     sort(s.begin(), s.end());
//     s.erase(unique(s.begin(), s.end()), s.end());
//     char an ='\0';
//     for(char i = 'a';i <= 'z';i++)
//     {
//         if(s.find(i) == -1)
//         {
//             an =i;
//             break;
//         }
        
//     }
//     if(an != '\0') cout<<an<<endl;
//     else cout <<"None\n";
// }

// int main()
// {
//         solve();

//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s; cin>>s;
    string st = "abcdefghijklmnopqrstuvwxyz";
    sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()), s.end());
    char an ='\0';
    for(int i = 0;i <= 26;i++)
    {
        if(s[i] != st[i])
        {
            an = st[i];
            break;
        }
    }
    if(an != '\0') cout<<an<<endl;
    else cout <<"None\n";
}

int main()
{
        solve();

    return 0;
}