#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int *h=new int[n];
        for(int i=0;i<n;i++)
        {
            cin>>h[i];
        }
        sort(h,h+n);
        int count=8;
        for(int i=0;i<n;i++)
        {
            if((h[i]!=6)&&(h[i]!=7)&&(h[i]!=13)&&(h[i]!=14)&&(h[i]!=20)&&(h[i]!=21)&&(h[i]!=27)&&(h[i]!=28))
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}