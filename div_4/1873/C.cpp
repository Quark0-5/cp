#include<bits/stdc++.h>
using namespace std;
#if 0
    cout << "Quark0.5:C";
#endif
auto solve = []()
{
    auto check_index = [](int i, int j)->int 
    {
        int output;
        if((i+j)<=9){
            output = min(i, j);
        }else{
            output = (9-max(i, j));
        }
        output++;
        return output;
    };
    int count = 0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            char input;
            cin >> input;
            if(input=='X'){
                count += check_index(i, j);
            }
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
