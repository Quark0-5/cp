#include<bits/stdc++.h>
using namespace std;
auto solve = []()
{
    int n, count=0;
    long long sum=0;
    cin >> n;
    int data[n];
    bool bl=true;
    for(int i=0;i<n;i++)
    {
		int a;
		cin >> a;
        data[i]=a;
        if(a<0)
        {
			a*=-1;
			sum+=a;
		}
		else sum+=a;
    }
    for(int i=0;i<n;i++)
    {
        if(data[i]<0 && bl)
        {
            count++;
            bl=false;
        }
        else 
        {
            if(data[i]>0)
            {
                bl=true;
            }
        }
    }
    cout << sum << ' ' << count << '\n';
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    while(test--) solve();
}
