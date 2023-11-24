#include<bits/stdc++.h>
using namespace std;
#if 0 
    cout << "Quark0.5 : Accepted";
#endif
#define input(n) scanf("%d", &n)
#define inputll(n) scanf("%lld", &n)
#define output(n) printf("%d", n)
#define outputll(n) printf("%lld", n)
#define space() printf(" ")
#define l long 
#define ll long long
auto solve = []()
{
    ll n;
    inputll(n);
    while(n!=1){
        outputll(n);
        space();
        if(n&1) n = 3*n + 1;
        else n /= 2;
    }
    output(1);
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    solve();
    return 0;
}