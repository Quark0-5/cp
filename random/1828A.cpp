#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while(tt--)
    {
        int n;
        cin >> n;
        if(n&1) for(int i=1;i<=n;i++) cout << i << (i%n?' ':'\n');
        else for(int i=1;i<=n;i++) cout << 2*i << (i%n?' ':'\n');
    }
    return 0;
}