#include<bits/stdc++.h>
using namespace std;
auto solve = []()
{
   vector<int> v;
   int a, b;
   cin >> a >> b;
   for(int i=0;i<a;i++)
   {
	   int x;
	   cin >> x;
	   v.push_back(x);
   }
   sort(v.begin(), v.end());
   int ma=0, r=0;
   for(int i=0;i<a;i++)
   {
	   if(abs(v[i]-v[i+1])<=b) r++;
	   else r=0;
       ma=max(ma, r);
   }
   ma++;
   cout << a-ma << '\n';
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
