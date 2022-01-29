#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,rev=0,r;
        cin>>n;
        while(n>0)
        {
            r=n%10;
            n=n/10;
            rev=rev*10 +r;
        }
        cout<<rev<<endl;
    }
    return 0;
}