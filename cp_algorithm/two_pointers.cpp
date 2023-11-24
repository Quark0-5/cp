#include<bits/stdc++.h>
using namespace std;
#if 0
    cout << "Two pointers";
#endif
auto check = []()
{
    int n;
    cin >> n;
    vector<int> data(n);
    for(int &input:data) cin >> input;
    sort(data.begin(), data.end());
    auto find = [&](int sum)->bool
    {
        int i=0, j=n-1;
        while(i<j){
            if((data[i]+data[j])==sum){
                return true ;
            }else if((data[i]+data[j])<sum){
                i++;
            }else{
                j--;
            }
        }
        return false;
    };
    int input;
    cin >> input;
    cout << (find(input)?"Pair found":"Pair not found");
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    check();
}