#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n>>a;
        if(n<a)
        {
            return 0;
        }
        else if((a>=(n-a)))
        {
            cout<<n-a<<endl;
        }
        else if((n-a)>=a)
        {
            cout<<a<<endl;
        }
    }
    return 0;
}