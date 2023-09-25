#include<bits/stdc++.h>
using namespace std;
#if 0
    cout << "Quark0.5:A";
#endif 
auto solve = []()
{
    int n, k, x;
    cin >> n >> k >> x;
    if(n<k || (x+1)<k){
        cout << -1 << '\n';
    }else{
        cout << ((x==k)?((k*(k-1))/2)+((n-k)*(x-1)):((k*(k-1)/2) + ((n-k)*x)))<< '\n';
    }
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