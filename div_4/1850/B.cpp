#include<bits/stdc++.h>
using namespace std;
auto solve = []()
{
    int n;
    cin >> n;
    int k=0, max=0;
    for(int i=1;i<=n;i++)
    {
		int a, b;
		cin >> a >> b;
		if(a<=10 && max<b)
		{
			k=i;
			max=b;
		}
	}
	cout << k << '\n';
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
