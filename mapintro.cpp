#include<bits/stdc++.h>
using namespace std;
#define ll long long


void pm(map<int,string> &m)
{
	cout<<m.size()<<endl;
	for(auto &value: m)
    {
    	cout<<value.first<<" "<<value.second<<endl; 
    }
}
void pms(map<string,string> &m)
{
	cout<<m.size()<<endl;
	for(auto &value: m)
    {
    	cout<<value.first<<" "<<value.second<<endl; 
    }
}
int main()
{
    map<int,string> m;// default map is in sorted order(key)
    m[1]="abc";//O(log(n))
    m[5]="cdc";
    m[3]="acd";
    m.insert({4,"afg"});
    m[6]="bcd";
    m[5]="ade";
    auto it=m.find(9);//O(log(n))
    if(it!=m.end())
      m.erase(it);//O(log(n))
    // m.clear();
    pm(m);
    // if(it==m.end())
    // {
    // 	cout<<"not found"<<endl;
    // }
    // else
    // {
    // 	cout<<(*it).first<<" "<<(*it).second<<endl;
    // }

    //two pritning techniques: long and short
    //long:

    // map<int,string>::iterator it;
    // for(it=m.begin();it!=m.end();++it)
    // {
    // 	cout<<(*it).first<<" "<<(*it).second<<endl;
    // }

    //short:
    // for(auto &value: m)
    // {
    // 	cout<<value.first<<" "<<value.second<<endl; 
    // }
    
    map<string,string> m1;
    m1["abcd"]="abcde";//insertion time complexity: m1.siez()*logn
    pms(m1); 

	
}
