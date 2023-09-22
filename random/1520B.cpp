#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		long long n, c=0;
		cin >> n;
		auto ord =[n, &c]()->int
		{
			for(int i=1;i<=9;i++)
			{
				long long x=i;
				while(x<=n)
				{
					x=x*10+i;
					c++;
				}
			}
			return c;
		};
		cout << ord() << "\n";
	}
	return 0;
}
