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
		vector<int> v;
		for(int i=0;i<n;i++)
		{
			int a;
			cin >> a;
			v.push_back(a);
		}
		for(int i=0;i<n;i++)
		{
			cout << (n+1-v[i]) << (((i+1)%n)?" ":"\n");
		}
	}
	return 0;
}
