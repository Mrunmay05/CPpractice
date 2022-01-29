#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int t1,t2,r1,r2;
        double a,b;
        cin>>t1>>t2>>r1>>r2;
        a=(pow(t1,2)/(pow(r1,3)));
        b=(pow(t2,2)/(pow(r2,3)));
        if(a==b)
        {
            cout<<"yes"<<endl;
        }
        else if(a!=b)
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}