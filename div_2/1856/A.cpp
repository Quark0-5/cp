#include<bits/stdc++.h>
using namespace std;
auto solve = []()
{
    int n;
    cin >> n;
    vector<int> data;
    bool bl = true;
    for(int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        data.push_back(a);
        if(i!=0)
        {
            if(data[i]<data[i-1]) bl=false;
        }
    }
    int x=0;
    vector<int> sort_data(data.begin(), data.end());
    sort(sort_data.begin(), sort_data.end());
    for(int i=n;i>0;i--)
    {
        if(data[i-1]!=sort_data[i-1])
        {
            x=sort_data[i-1];
            break;
        }
    }
    if(bl) cout << 0 << '\n';
    else cout << x << '\n';
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    while(test--) solve();
    return 0;
}