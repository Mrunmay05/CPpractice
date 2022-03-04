#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int x1,x2,y1,y2;
        cin>>x1>>x2>>y1>>y2;
        if(x1/y1>x2/y2)
        {
            cout<<-1<<endl;
        }
        if(x1/y1<x2/y2)
        {
            cout<<1<<endl;
        }
        if(x1/y1==x2/y2)
        {
            cout<<0<<endl;
        }
    }
    return 0;
}