#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int pag=n*1000;
        int noteb=pag/100;
        cout<<noteb<<endl;
    }
    return 0;
}