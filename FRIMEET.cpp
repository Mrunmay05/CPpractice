#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int x1,x2;
        cin>>x1>>x2;
        x1+=1;
        x2+=2;
        if(x1!=x2)
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}