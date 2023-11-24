#include<bits/stdc++.h>
using namespace std;
auto solve = []()
{
    long long i, j, maxNumber, difference, diagonalValue, plus, minus;
    cin >> i >> j;
    maxNumber = max(i, j);
    difference = maxNumber - min(i, j);
    diagonalValue = maxNumber*(maxNumber-1) + 1;
    plus = (diagonalValue +  difference);
    minus = (diagonalValue -  difference);
    if(i == j){
        cout << diagonalValue << '\n';
    }else if(i > j){
        cout << ((maxNumber&1)?minus:plus) << '\n';
    }else{
        cout << ((maxNumber&1)?plus:minus) << '\n';
    }
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