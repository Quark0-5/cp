#include<bits/stdc++.h>
using namespace std;
#if 0
    cout << "Quark0.5:B";
#endif
auto solve = []()
{
    int n;
    cin >> n;
    int data[n];
    for(int &x:data) cin >> x;
    sort(data, data+n);
    int x = data[0]+1;
    data[0]=x;
    long long output=1;
    for(int i=0;i<n;i++){
        output = static_cast<long long> (output*data[i]);
    }
    cout << output << '\n';
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
