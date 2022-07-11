#include <iostream>
using namespace std;

int main() {
	int t;
cin>>t;

while(t--){

int n;

cin>>n;

int sum=0,c2=0;

for(int i=1;i<=n;i++)
{ 
    int num;

cin>>num;

sum+=num;

}

if(abs (sum)%2!=0)
{
cout<<"-1"<<endl;
}
else{
cout<<abs (sum)/2<<endl;
}

}
return 0;
}