#include<bits/stdc++.h>
using namespace std;
auto solve = []()
{
    string s;
    cin >> s;
    int count = 1, max_ = 0;
    for(int i = 0; i < s.size();i++){
        if(s[i] != s[i+1]){
            max_ = max(max_, count);
            count = 1;
        }else{
            count++;
        }
    }
    cout << max_ << '\n';
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    solve();
}