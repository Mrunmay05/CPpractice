#include <iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int *x=new int[n];
        int *y=new int[n];
        sort(x,x+n);
        sort(y,y+n);
        for(int i=0;i<n;i++)
        {
            cin>>x[i]>>y[i];
        }
        int ans1=0;
        int ans2=0;
        for(int i=0;i<n;i++)
        {
            while(i<n-1&&x[i]==x[i+1])
            {

                ans1++;
            }
        }
        for(int i=0;i<n;i++)
        {
            while(i<n-1&&y[i]==y[i+1])
            {
                ans2++;
            }
        }
        cout<<ans1+ans2<<endl;
    }
    return 0;
}