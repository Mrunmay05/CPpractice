#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string t;
        cin>>t;
        string m;
        for(int i=0;i<5;i++)
        {
            if(s[i]==t[i])
            {
                m.push_back('g');
            }
            else
            {
                m.push_back('b');
            }
        }
        cout<<m<<endl;
    }
}