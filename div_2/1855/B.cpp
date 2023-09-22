#include<bits/stdc++.h>
using namespace std;
auto solve = []()
{
    long long n;
    cin >> n;
    vector<int> v;
    bool bl=true;
    for(int i=1;i<=sqrt(n);i++)
    { 
        if(n%i==0)
        {
            if(bl)
            {
                v.push_back(i);
                bl=false;
            }
        }
        else if(!bl)
        {
            v.push_back(i-1);
            bl=true;
        }
    }
    int maxi=0;
    for(int i=0;i<v.size();i+=2)
    {
        maxi=max(maxi, (v[i+1]-v[i]));
    }
    cout << maxi+1 << '\n';
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