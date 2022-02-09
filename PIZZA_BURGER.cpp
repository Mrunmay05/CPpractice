#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        if(y>x&&z>x)
        {
            cout<<"Nothing"<<endl;
        }
        else if(x>=y&&x>=z)
        {
            cout<<"pizza"<<endl;
        }
        else if(x>=y&&x<z)
        {
            cout<<"pizza"<<endl;
        }
        else if(x<y&&x>=z)
        {
            cout<<"burger"<<endl;
        }
    }
    return 0;
}