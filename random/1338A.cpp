#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    auto alam = [&a, &b]()->int{
    a=+b;
    return a;
    };

    auto blam =[&a, &b]()->int{
    b=+a;
    return b;
    };
    bool bl=true;
    int count=0;
    while((max(a, b))<=c){
        if(bl)
        {
           alam();
           count++;
           bl=false;
        }
        else
        {
           blam();
           count++;
           bl=true;
        }
    }
    cout << count << "\n";
    return 0;
}
