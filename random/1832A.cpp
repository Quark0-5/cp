#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        string s;
        cin >> s;
        int n = (s.size())/2;
        auto check = [&]()->string
        {
            set<char> st(s.begin(), s.begin()+n);
            return ((st.size()==1)?"NO\n":"YES\n");
        };
        cout << ((n>1)?check():"NO\n");
    }
    return 0;
}
