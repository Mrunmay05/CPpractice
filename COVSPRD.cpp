#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
       long long int n,d,inf=1;
       cin>>n>>d;
       for(int i=1;i<=d&&inf<n;i++)
       {
           if(i<11){inf*=2;}
           else{inf*=3;}
       }
       if(inf>=n)
       inf=n;
       cout<<n<<endl;
    }
    return 0;
}