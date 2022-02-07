#include <iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        double round=pow((0.143*n),n);
        double floor(double round);
        if((round-floor(round))<0.5)
        {
            cout<<floor(round)<<endl;
        }
        else
        {
            cout<<floor(round)+1<<endl;
        }
    }
    return 0;
}