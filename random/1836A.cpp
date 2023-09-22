#include<bits/stdc++.h>
using namespace std;
auto solve = []()
{
    int n, x=0;
    cin >> n;
    int data[n];
    for(int i=0;i<n;i++) cin >> data[i];
    bool bl=true;
    sort(data, data+n);
    for(auto p:data) cout << p << ' ';
    for(int i=0;i<n-1;i++)
    {
		cout << '\n' << x << '\n';
        if(data[i]==x && data[i+1]==x+1) x++;
        else if(data[i]==data[i+1]) continue;
        else bl=false;
    }
    if((data[n-1]-data[n-2])>1 || data[0]>0) bl = false;
    cout << (bl?"YES\n":"NO\n");
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while(tt--) solve(); 
}
