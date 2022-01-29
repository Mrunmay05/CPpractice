#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,r;
        cin>>n;
        int count=0;
        while(n>0)
        {
           r=n%10;
           n=n/10;
           if(r==4)
           {
               count++;
           }
        }
        cout<<count<<endl;
    }
    return 0;
}