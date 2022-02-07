#include <iostream>
#include <stdlib.h>
#include<math.h>
using namespace std;

int main()
{
	int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0;i<1;i++)
        {
            int x=rand()%(((pow(2,n)-1)+1-0)+1);
        }
    }
}

/* int i, rnum, amount, first, last;
    cout<<"Enter the Interval: ";
    cin>>first>>last;
    cout<<"How many Random Numbers to Generate ? ";
    cin>>amount;
    cout<<"\nList of "<<amount<<" Random Numbers Between "<<first<<" and "<<last;
    srand(time(0));
    for(i=0; i<amount; i++)
    {
        rnum = rand()%(last+1-first)+first;
        cout<<endl<<rnum;
    }
    cout<<endl;
    return 0;
*/