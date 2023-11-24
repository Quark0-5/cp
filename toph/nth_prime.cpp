#include<bits/stdc++.h>
using namespace std;
const int N=7368790;
int main()
{
    bitset<N> is_prime;
    is_prime.set();
    is_prime[0]=is_prime[1]=0;
    for(int i=2;i*i<=N;i++)
    {
        if(is_prime[i])
        {
            for(int j=i*i;j<=N;j+=i)
            {
                is_prime[j]=0;
            }
        }
    }
    int n;
    cin >> n;
    if(n==1)
    {
        cout << 2 << '\n';
    }
    else
    {
        int i=1;
        int p=3;
        while(true)
        {
            if(is_prime[p])
            {
                i++;
                if(i==n)
                {
                    cout << p << '\n';
                    break;
                }
            }
            p+=2;
        }

    }
}
