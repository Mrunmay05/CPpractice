#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	vector<int> v={1,2,3,4,5};
	for(auto &value: v)
	{
		value=value+2;
	}
	for(auto &value: v)
	{
		cout<<value<<" ";
	}
	return 0;
}
