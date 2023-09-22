#include<bits/stdc++.h>
using namespace std;
auto solve = []()
{
    int n;
    cin >> n;
    cout << ((n&1 || n==2)?"NO":"YES") << '\n';
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}