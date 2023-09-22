#include<bits/stdc++.h>
using namespace std;
auto solve = []()
{
    char data[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin >> data[i][j];
        }
    }
    auto matrix = [&]()->char
    {
        if(data[0][0]==data[0][1] && data[0][1]== data[0][2] && data[0][0]!='.') return data[0][0];
        else if(data[0][0]==data[1][1] && data[1][1]== data[2][2] && data[0][0]!='.') return data[0][0];
        else if(data[0][0]==data[1][0] && data[1][0]== data[2][0] && data[0][0]!='.') return data[0][0];
        else if(data[0][1]==data[1][1] && data[1][1]== data[2][1] && data[0][1]!='.') return data[0][1];
        else if(data[0][2]==data[1][2] && data[1][2]== data[2][2] && data[0][2]!='.') return data[0][2];
        else if(data[0][2]==data[1][1] && data[1][1]== data[2][0] && data[0][2]!='.') return data[0][2];
        else if(data[1][0]==data[1][1] && data[1][1]== data[1][2] && data[1][0]!='.') return data[1][0];
        else if(data[2][0]==data[2][1] && data[2][1]== data[2][2] && data[2][0]!='.') return data[2][0];
        else return 'd';
    };
    cout << (matrix()=='d'?"DRAW":string(1, matrix()))<< '\n';
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
