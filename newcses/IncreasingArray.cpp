#include<bits/stdc++.h>
using namespace std;
#define ll long long 
auto solve = []()
{
    int n;
    cin >> n;
    vector<ll> data(n);
    for(auto &x:data) cin >> x;
    ll count = 0;
    for(int i=0;i<(n - 1);i++){
        if(data[i] > data[i+1]){
            count += (data[i] - data[i+1]);
            data[i + 1] += (data[i] - data[i+1]);
        }
    }
    cout << count << '\n';
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    solve();
}