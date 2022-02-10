#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(y>=x/2)
        {
            cout<<x/2<<endl;
        }
        else if(y<=x/2)
        {
            cout<<y<<endl;
        }

    }
    return 0;
}