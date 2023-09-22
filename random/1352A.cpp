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
        auto round = [&]()
        {
           int k=n;
           int i=0;
           while(k!=0)
           {
               i++;
               int mod = pow(10, i);
               int a = n % mod;
               if(a!=0)
               {
				   v.push_back(a);
			   }
               k/=10;
               n-=a;
            }
            int x = v.size();
            cout << x << "\n";
            for(int j=0;j<x;j++)
            {
                cout << v[j] << (((j+1)%x)?' ':'\n');
            }
        };
        round();
    }
}
