#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,fact=1;
        cin>>n;
        while(n>0)
        {
          fact=fact*n;
          n=n-1;  
        }
        cout<<fact<<endl;
    }
    return 0;
}