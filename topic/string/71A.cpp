#include<bits/stdc++.h>
using namespace std;
auto solve = []()
{
    string s;
    cin >> s;
    auto print = [&s]()
    {
        cout << s << "\n";
    };
    auto print_long = [&s]()
    {
        cout << s[0] << s.size()-2 << s[s.size()-1] << "\n";
    };
    ((s.size()>10)?print_long():print());
};
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        solve();
    }
    return 0;
}
