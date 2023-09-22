#include<bits/stdc++.h>
using namespace std;
#if 0
    cout << "Quark0.5:A";
#endif
auto solve = []()
{
    string s;
    cin >> s;
    cout << ((s=="bca" || s=="cab")?"NO\n":"YES\n");
    
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int test;
    cin >> test;
    while(test--) solve();
    return 0;
}
