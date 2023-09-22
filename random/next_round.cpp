#include<bits/stdc++.h>
using namespace std;
auto solve = []()
{
    int n, k;
    cin >> n >> k;
    int data[n];
    for(auto &x:data) cin >> x;
    int count=0;
    for(int i=0;i<n;i++) if(data[i]>=data[k-1] && data[i]>0) count++;
    cout << count << '\n';
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}