#include<bits/stdc++.h>
using namespace std;
auto solve = [](int n)
{
    if(n==1){
        cout << 1 << '\n';
    }else if(n==2 || n==3){
        cout << "NO SOLUTION" << '\n';
    }else{
        vector<int> odd, even;
        for(int i=1;i<=n;i++){
            if(i&1){
                odd.push_back(i);
            }else{
                even.push_back(i);
            }
        }
        for(auto x:even){
            cout << x << " ";
        }
        for(int i=0;i<odd.size();i++){
            cout << odd[i] << (((i+1)%(odd.size()))?" ":"\n");
        }
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    solve(n);
}