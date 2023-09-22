#include<bits/stdc++.h>
using namespace std;
auto solve = []()
{
    int x, y;
    cin >> x >> y;
    int result = x*x + y*y;
    int count = 0;
    while(count*count < result) count++;
    int output = 2;
    if (x==0 && y==0) output=0;
    else if(count*count == result) output=1;
    cout << output << '\n';
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