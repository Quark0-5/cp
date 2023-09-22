#include<bits/stdc++.h>
using namespace std;
auto solve = []()
{
    int n, store=0;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        if(i==0) store=a;
        else store=gcd(store, a);
    }
    cout << store << '\n';
    if(n==2) cout << "NO\n";
    else cout << (store<=n?"YES\n":"NO\n");
};
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    while(test--) solve();
    return 0;
}
