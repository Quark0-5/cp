#include<iostream>
using namespace std;
auto solve = []()
{
    int n, m, k, h;
    cin >> n >> m >> k >> h;
    long long int data[n];
    for(int i=0;i<n;i++)
    {
        cin >> data[i];
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        int ab = abs(data[i]-h);
        if(ab%k==0)
        {
            if((ab/k)<m && ab!=0) count++;
        }
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