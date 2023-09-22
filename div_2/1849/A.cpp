#include<bits/stdc++.h>
using namespace std;
auto solve = []()
{
    int b , c, h;
    cin >> b >> c >> h;
    /*
    if((c+h)>=b) cout << 2*b-1 <<'\n';
    else   cout << 2*(c+h)+1 << '\n';
    */
    cout << min(c+h, b-1)*2+1 << '\n';
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