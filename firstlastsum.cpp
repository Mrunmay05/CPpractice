#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int answer;
    for(int i=0;i<t;i++)
    {
        int n,ld,r;
        cin>>n;
        ld=n%10;
        while(n>0)
        {
            r=n%10;
            n=n/10;
        }
        answer=ld+r;
        cout<<answer<<endl;
    }
    return 0;
}