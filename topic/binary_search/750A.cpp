#include<iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int total=0;
    int x;
    for(int i=1;i<=n;i++)
    {
        total+=i*5;
        if(total+k<240)
        {
            continue;
        }
        else
        {
            x=i;
            break;
        }
    }
    cout << x << "\n";
}