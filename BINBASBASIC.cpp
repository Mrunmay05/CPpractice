#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	    int no,k,c=0;
	    string s;
	    cin>>no;
	    cin>>k;
	    cin>>s;
	    for(int f=0;f<no/2;f++){
	        if(s[f]!=s[no-f-1]){
	            c++;
	        }
	    }
	    int sol=k-c;
	    if((sol>=0 && sol%2==0)||(sol>=0 && no%2==1)){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}