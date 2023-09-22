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
		int negative = 0, positive = 0;
		for(int i=0;i<n;i++)
		{
			int a;
			cin >> a;
			if(a==-1) negative+=a;
			else positive+=a;
		}
		if(positive+negative>=0) 
		{
			negative*=-1;
			if(negative&1) cout << 1 << '\n';
			else cout << 0 << '\n';
		}
		else
		{
			negative*=-1;
			int out = negative - (n/2);
			if(((negative-out)&1)) out++;
			cout << out << '\n';
		}
	}
	return 0;
}
