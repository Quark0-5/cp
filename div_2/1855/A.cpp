#include<bits/stdc++.h>
using namespace std;
auto solve = []()
{
    int n;
    cin >> n;
    int count=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        if(i==(a-1)) count++;
    }
    cout << (((count&1)&&count!=0)?((count/2)+1):(count/2)) << '\n';
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