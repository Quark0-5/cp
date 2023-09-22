#include<bits/stdc++.h>
using namespace std;
#if 0
    cout << "Quark0.5:D";
#endif
auto solve = []()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int update=1, count = 0;
    for(int i=0;i<n;i+=update){
        if(s[i]=='B'){
            count++;
            update=k;
        }else{
            update=1;
        }
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
