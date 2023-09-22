#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<char> v;
        char x;
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(i==j)
            {
                x=s[j];
                v.push_back(x);
            }
            else if(s[i]==x)
            {
                j=i+1;
            }
        }
        for(auto u:v)
        {
            cout << u;
        }
        cout << "\n";
    }
    return 0;
}
