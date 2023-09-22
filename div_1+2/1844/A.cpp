#include<bits/stdc++.h>
using namespace std;
auto solve = []()
{
    int a, b;
    cin >> a >> b;
    if(a==1 && b!=2) cout << 2 << '\n';
    else 
    {
        if(a==1 && b==2) cout << 3 << '\n';
        else cout << a-1 << '\n';
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    while(test--) solve();
    return 0;
}