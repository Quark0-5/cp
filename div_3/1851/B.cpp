#include<bits/stdc++.h>
using namespace std;
auto solve = []()
{
    /*
    //another way
    int n;
    cin >> n;
    vector<int> v(n), vc(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
        vc[i]=vc[i];
    }
    */
    int n;
    cin >> n;
    vector<int> v, vc;
    for(int i=0;i<n;i++)
    {
        int data;
        cin >> data;
        v.push_back(data);
        vc.push_back(data);
    }
    //vector<int> vc(v.begin(), v.end());
    sort(vc.begin(), vc.end());
    bool ok = true;
    for(int i=0;i<n;i++)
    {
        ok &=((v[i]&1)==(vc[i]&1));
        // ok &=(v[i]%2==vc[i]%2);
        //cout << boolalpha << ok << '\n';
    }
    cout << (ok?"YES":"NO") << '\n';
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