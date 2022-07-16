/*
 Given n strings,print unique strings
 in lexiographical order with their frequency
 n<=10^5
 |S|.<=.100
*/



#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	map<string,int> m;
	int t;
	cin>>t;
	while(t--)
	{
        string s;
        cin>>s;
        m[s]++;
	}

	for(auto &m1:m)
	{
		cout<<m1.first<<" "<<m1.second<<endl;
	}
	return 0;
}

