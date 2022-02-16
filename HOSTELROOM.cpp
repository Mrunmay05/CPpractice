#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int *a=new int[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int count=x;
        int max;
        for(int i=0;i<n;i++)
        {
            count=count+a[i];
            if(count>count+a[i+1])
            {
                max=count;
            }
        }
        cout<<max<<endl;
        
    }
    return 0;
}