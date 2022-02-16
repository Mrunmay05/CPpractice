#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int *b=new int[2*n];
        for(int i=0;i<2*n;i++)
        {
            cin>>b[i];
        }
        int ec=0;
        int oc=0;
        for(int i=0;i<2*n;i++)
        {
            if(b[i]%2==0)
            {
                ec++;
            }
            else if(b[i]%2==1)
            {
                oc++;
            }
        }
        if(ec==oc)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
    return 0;
}