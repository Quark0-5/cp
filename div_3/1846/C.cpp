#include<bits/stdc++.h>
using namespace std;
auto solve = []()
{
    int n, m, h, count=0, sum=0;;
    cin >> n >> m >> h;
    int data[m];
    for(int i=0;i<n;i++)
    {
		if(i==0)
		{
			for(int j=0;j<m;j++)
			{
				cin >> data[j];
			}
		}
		else 
		{
			for(int j=0;j<m;j++)
			{
				int a;
				cin >> a;
			}
		}
	}
    sort(data, data+m);
    for(int i=0;i<m;i++)
    {
        cout << sum << '\n';
        sum = 2*sum + data[i];
        if(sum<=h) count++;
        else break;
    }
    cout << count << '\n';
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    while(test--) solve();
}
