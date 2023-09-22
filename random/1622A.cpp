#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while(tt--)
    {
        auto even = [](int m)->bool
        {
            return ((m&1)?false:true);
        };
        int a, b, c;
        cin >> a >> b >> c;
        if(a!=b && a!=c && b!=c)
        {
            int x = max({a, b, c});
            int y = min({a, b, c});
            int z = (a+b+c)-(x+y);
            if((y+z) == x)
            {
                cout << "YES\n";
            }
            
        }
        else if(a!=b && a!=c)
        {
            cout << (even(a)?"YES\n":"NO\n");
        }
        else if(b!=a && b!=c)
        {
            cout << (even(b)?"YES\n":"NO\n");
        }
        else if(c!=a && c!=b)
        {
            cout << (even(c)?"YES\n":"NO\n");
        }
        else
        {
            cout << (even(a)?"YES\n":"NO\n");
        }
    }
    return 0;
}
