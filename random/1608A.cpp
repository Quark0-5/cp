#include<bits/stdc++.h>
using namespace std;
auto solve = []()
{
    int n;
    cin >> n;
    auto run = [&]()
    {
        for(int i=2;i<=(n+1);i++)
        {
            cout << i << (i%(n+1)?' ':'\n');
        }
    };
    if(n==1) cout << 1 << '\n';
    else if(n==2) cout << 2 << ' ' << 3 << '\n';
    else run();
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
