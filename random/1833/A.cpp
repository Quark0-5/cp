#include<bits/stdc++.h>
using namespace std;
int main()
{
	  ios::sync_with_stdio(false);
	  cin.tie(0);
	  int test;
	  cin >> test;
	  while(test--)
	  {
		  int n;
		  cin >> n;
		  string s;
		  cin >> s;
		  set<string> uni;
		  for(int i=0;i<(n-1);i++)
		  {
			  string k;
			  k.push_back(s[i]);
			  k.push_back(s[i+1]);
			  uni.insert(k);
		  }
		  cout << uni.size() << "\n";
	  }
	  return 0;
  }
