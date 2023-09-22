#include<bits/stdc++.h>
using namespace std;
auto solve = []()
{
    string s = "314159265358979323846264338327";
    string n;
    cin >> n;
    int count = 0;
    for(int i=0;i<n.size();i++){
        if(n[i]==s[i]) count++;
        else break;
    }
    cout << count << '\n';


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