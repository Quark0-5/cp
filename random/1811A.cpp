#include<bits/stdc++.h>
using namespace std;
auto solve = []()
{
    int a;
    cin >> a;
    char b;
    cin >> b;
    string s;
    cin >> s;
    bool bl=true;
    for(int i=0;i<a;i++)
    {
        if(b>s[i] && bl)
        {
            cout << b;
            bl=false;
        }
        cout << s[i];
    }
    if(bl) cout << b;
    cout << '\n';
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
