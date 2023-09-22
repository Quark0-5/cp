#include<bits/stdc++.h>
using namespace std;
auto solve = []()
{
    int n;
    cin >> n;
    int data[n];
    for(auto &x:data) cin >> x;
    for(int i=0;i<n;i++) cout << i+1 << ((i+1)%n?" ":"\n"); 
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