#include<bits/stdc++.h>
using namespace std;
auto solve = []()
{
    int n;
    cin >> n;
    int data[n];
    bool bl=false;
    int d=0;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            cin >> data[i];
        }
        else
        {
            cin >> data[i];
            if(data[i]<data[i-1]) bl=true;
            if(i==1) d=data[i]-data[i-1];
            else
            {
                if(d>(data[i]-data[i-1]))
                {
                    d=data[i]-data[i-1];
                }
            }
        }
    }
    d/=2;
    d++;
    cout << (bl?0:d) << '\n';
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
