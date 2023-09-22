#include<bits/stdc++.h>
using namespace std;
auto solve = []()
{
    int n, count=0 ;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int a, b;
        cin >> a >> b;
        if(a>b) count++;
    }
    cout << count << '\n';
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