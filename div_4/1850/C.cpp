#include<bits/stdc++.h>
using namespace std;
auto solve = []()
{
   string s;
   for(int i=0;i<8;i++)
   {
	   for(int j=0;j<8;j++)
	   {
		   char a;
		   cin >> a;
		   if(a!='.') s.push_back(a);
	   }
   }
   cout << s << '\n';
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
