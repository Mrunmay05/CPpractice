#include <iostream>
using namespace std;

int main() {
	int l,n,x,k;
	cin>>l;
	while(l--)
	{
	    cin>>n>>x;
	    k=n-x;
	    int count=0;
	    while(k>0)
	    {
	        k=k-4;
	        count++;
	    }
	    if(count>0)
	    {
	    cout<<count<<endl;
	    }
	    else
	    {
	        cout<<"0"<<endl;
	    }
	}
}