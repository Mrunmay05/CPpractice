#include<bits/stdc++.h>
using namespace std;
#define ll long long

void print_set(set<string> &m)
{
	cout<<"size: "<<m.size()<<endl;
	for(auto &s:m)
	{
		cout<<s<<endl;
	}
	
}

int main()
{
	set<string> s;//stores unique elements in sorted order
	s.insert("abc");//O(logn)
	s.insert("xyz");
	s.insert("def");
	s.insert("abc");
	print_set(s);
	// auto it=s.find("abc");//logn
	// if(it!=s.end()){
	//   cout<<*it<<endl;	
	// }
	
}
