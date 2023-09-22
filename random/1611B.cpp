#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int a, b;
        cin >> a >> b;
        auto team = [&]()->long long 
        {
            long long x=min(a, b);
            long long y=max(a, b);
            if(a==b)
            {
				return (a+b)/4;
			}
            while(x<=y)
            {
                if(x<=0)
                {
                    return 0;
                }
                else
                {
                    if((x*3)<=y)
                    {
                        return x;
                    }
                }
                x--;
                y++;
            }
            return 0;
        };
        cout << team() << "\n";
    }
    return 0;
}
