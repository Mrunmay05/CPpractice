#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int dsa1,toc1,dm1;
        cin>>dsa1>>toc1>>dm1;
        int dsa2,toc2,dm2;
        cin>>dsa2>>toc2>>dm2;
        int tot1=dsa1+toc1+dm1;
        int tot2=dsa2+toc2+dm2;
        if(tot1>tot2)
        {
            cout<<"dragon"<<endl;
        }
        else if(tot2>tot1)
        {
            cout<<"sloth"<<endl;
        }
        else if(tot1==tot2)
        {
            if(dsa1>dsa2)
            {
                cout<<"dragon"<<endl;
            }
            else if(dsa2>dsa1)
            {
                cout<<"sloth"<<endl;
            }
            else if(dsa1==dsa2)
            {
                if(toc1>toc2)
                {
                    cout<<"dragon"<<endl;
                }
                else if(toc2>toc1)
                {
                    cout<<"sloth"<<endl;
                }
                else if(toc1==toc2)
                {
                    cout<<"tie"<<endl;
                }
            }
        }
    }
    return 0;
}