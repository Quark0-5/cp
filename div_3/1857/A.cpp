#include<bits/stdc++.h>
using namespace std;
auto solve = []()
{
    int n;
    cin >> n;
    int odd=0, even=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        if(a&1) odd++;
        else even++;
    }
    cout << ((odd&1)?"NO":"YES") << '\n';
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