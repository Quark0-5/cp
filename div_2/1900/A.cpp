#include<bits/stdc++.h>
using namespace std;
auto solve = []()
{
    int n;
    cin >> n;
    string data;
    cin >> data;
    int count = 1, sum = (data[n-1] == '.'?1:0);
    for(int i = 0;i<(n-1);i++){
        if(data[i] == '.'){
            sum++;
        }
        if(data[i] == data[i+1] && data[i] == '.'){
            count++;
            if(count > 2){
                sum = 2;
                break;
            }
        }else{
            count = 1;
        }
    }
    cout << sum << '\n';
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