#include<bits/stdc++.h>
using namespace std;
#if 0 
    cout << "Quark0.5";
#endif
auto solve = []()
{
    int n;
    cin >> n;
    int bitsum = (n&1?((n + 1) >> 1):(n >> 1));
    bitsum *= (n&1?n:(n + 1));
    for(int i=0;i<(n - 1);i++){
        int a;
        cin >> a;
        bitsum -= a;
    }
    cout << bitsum << '\n';
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    solve();
    return 0;
}