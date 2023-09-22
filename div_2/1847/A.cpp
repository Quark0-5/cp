#include<bits/stdc++.h>
using namespace std;
auto solve = []()
{
    int n, k;
    cin >> n >> k;
    int data[n];
    int dif[n-1];
    for(int i=0;i<n;i++)
    {
        cin >> data[i];
        if(i!=0)
        {
            dif[i-1]=abs(data[i]-data[i-1]);
        }
    }
    int x=n-k;
    sort(dif, dif+n-1);
    int sum = 0;
    for(int i=0;i<x;i++)
    {
        sum+=dif[i];
    }
    cout << sum << '\n';
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