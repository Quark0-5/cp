#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n, k, x;
	cin >> n >> k;
	x=n/2;
	auto even = [&]()->long long
	{
		if(k<=x)
		{
			return (2*k-1);
		}
		else
		{
			k=k-x;
			return 2*k;
		}
	};
	
	auto odd = [&]()->long long
	{
		if(k<=x+1)
		{
			return (2*k-1);
		}
		else
		{
			k=k-(x+1);
			return 2*k;
		}
	};
	cout << ((n&1)?odd():even()) << "\n";
	return 0;	
}
