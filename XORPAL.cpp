#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count1;
        int count0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            count1++;
        }
        if(count0==count1)
        {
            cout<<"yes"<<endl;
            continue;
        }
        if(count0%2!=0 && count1%2!=0)
        {
            cout<<"no"<<endl;
        }
        else
        {
            cout<<"yes"<<endl;
        }

    }
    return 0;
}