#include<bits/stdc++.h>
using namespace std;
#if 0
    cout << "Quark0.5 and Problem A";
#endif
auto solve = []()
{
    int a, b, c;
    cin >> a >> b >> c;
    int dif = abs(a-b);
    if(dif%(2*c)==0){
        cout << (dif/(2*c)) << '\n'; 
    }else{
        cout << (dif/(2*c)) + 1 << '\n';
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