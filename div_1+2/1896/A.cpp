#include<bits/stdc++.h>
using namespace std;
auto solve = []()
{
    int n;
    cin >> n;
    vector<int> data(n);
    for(auto &x:data) cin >> x;
    cout << ((data[0] == 1)?"YES":"NO") << '\n';
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