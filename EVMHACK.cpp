#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,p,q,r;
        cin>>a>>b>>c>>p>>q>>r;
        int tot=(p+q+r)/2;
        if((a+b+c)>tot)
        {
            cout<<"yes"<<endl;
        }
        else if((p+b+c)>tot||(a+q+c)>tot||(a+b+r)>tot){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}