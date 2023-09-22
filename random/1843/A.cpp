#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    while(test--)
    {
		ll m, n;
		cin >> m >> n;
		ll ton = 0;
		ll ten = 0;
		for(ll i=0;i<m;i++)
		{
			ll a;
			cin >> a;
			ton+=a;
		}
		for(ll i=0;i<n;i++)
		{
			ll b;
			cin >> b;
			ten+=b;
		}
		if(ton > ten)
		{
			cout << "Tsondu\n";
		}
		else if(ton < ten)
		{
			cout << "Tenzing\n";
		}
		else
		{
			cout << "Draw\n";
		}
    }
    return 0;
}
