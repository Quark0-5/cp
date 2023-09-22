#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());
        int sum = 0;
        for(int i=0;i<(n/2);i++)
        {
            int ma = max(v[i], v[n-i-1]);
            int mi = min(v[i], v[n-i-1]);
            int x = ma-mi;
            sum+=x;
        }
        cout << sum << "\n";
    }
    return 0;
}
