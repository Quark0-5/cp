#include<bits/stdc++.h>
using namespace std;
auto solve = []()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << (((a+b)>=10 || (a+c)>=10 || (b+c)>=10)?"YES\n":"NO\n");
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
