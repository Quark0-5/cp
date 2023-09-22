#include<iostream>
using namespace std;
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		auto search = [](char a)->bool
		{
			string s = "cdefors";
			int l=0, r=(s.size()-1), mid;
			int x = (int)a;
			while(l<=r)
			{
				mid=(l+r)/2;
				int m=(int)s[mid];
				if(m==x)
				{
					return true;
				}
				else if(m>x)
				{
					l=mid+1;
				}
				else
				{
					r=mid-1;
				}
			}
			return false;
		};
		char a;
		cin >> a;
		cout << (search(a)?"YES":"NO") << "\n";
	}
	return 0;
}
