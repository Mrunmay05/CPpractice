#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int tot=100*x;
        char w[14];
        int count1=0;
        int count2=0;
        int count3=0;
        for(int i=0;i<14;i++)
        {
            cin>>w[i];
        }
        for(int i=0;i<14;i++)
        {
            if(w[i]=='C')
            {
               count1++;
            }
            else if(w[i]=='N')
            {
               count2++;
            }
            else if(w[i]=='D')
            {
                count3++;
            }
        }
        if(count1>count2)
        {
            cout<<60*x<<endl;
        }
        else if(count2>count1)
        {
            cout<<40*x<<endl;
        }
        else
        {
            cout<<55*x<<endl;
        }

    }
    return 0;
}