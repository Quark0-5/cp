#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<char> v;
    int i=0;
    while(i<n)
    {
		int k=0;
        if(s[i]=='o' && s[i+1]=='g' && s[i+2]=='o')
        {
            v.push_back('*');
            v.push_back('*');
            v.push_back('*');
            bool bl=true;
            for(int j=i+3;i<n;i++)
            {
                if(bl)
                {
                    if(s[j]=='g')
                    {
                        continue;
                        bl=false;
                    }
                    else
                    {
                        k=j;
                        break;
                    }
                }
                else
                {
                    if(s[j]=='o')
                    {
                        continue;
                        bl=true;
                    }
                    else
                    {
                        k=j;
                        break;
                    }
                }
            }
        }
        else
        {
            v.push_back(s[i]);
            k=i+1;
        }
        i=k;
        cout << k << "\n";
    }
    for(auto &x:v)
    {
        cout << x;
    }
}
