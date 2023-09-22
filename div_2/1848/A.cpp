#include<bits/stdc++.h>
using namespace std;
auto solve = []()
{
    int m, n, k;
    cin >> m >> n >> k;
    vector<pair<int,int>> v;
    for(int i=0;i<(k+1);i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    bool bl=false;
    for(int i=0;i<(k);i++)
    {
        int a, b, c, d;
        a=v[i].first;
        b=v[i].second;
        c=v[i+1].first;
        d=v[i+1].second;
        if(a==c || a==d || b==c || b==d) bl=true;
        else
        {
			bl=false;
			break;
		}
    }
    cout << (bl?"YES":"NO") << '\n';
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
