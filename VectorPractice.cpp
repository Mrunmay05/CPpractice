// #include <bits/stdc++.h>
// using namespace std;

// void printvec(vector<int> v)
// {
//     cout<<"size: "<<v.size()<<endl;//v.size()->O(1)
//     for (int i=0;i<v.size();i++)
//     {
//         cout<<v[i]<<" ";
//     }
    
// }

// int main(){
//     int a[10];
//     vector<int> v;
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         int x;
//         cin>>x;
//         printvec(v);
//         v.push_back(x);//O(1) complexity
//     }
//     printvec(v);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
/*
when we pass a vector in the parameters it takes the copy of the vector and not the actual one.
But copying is an expensive task with O(n) time complexity. So to make changes to the actual vector use reference to the vector
i.e void printvec(vector<data_type> &v)
*/
// void printvec(vector<int> &v)
// {
//     cout<<"size: "<<v.size()<<endl;//v.size()->O(1)
//     for (int i=0;i<v.size();i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     v.push_back(9);
//     cout<<endl;
    
// }

// int main(){
//     // int a[10];
//     vector<int> v(10,5);
//     v.push_back(8);
//     v.pop_back();
//     // printvec(v);
//     vector<int> &v2=v;//O(n)
//     v2.pop_back();
//     printvec(v);
//     printvec(v);
//     printvec(v2);
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std; 
void printvec(vector<string> &v)
{
    cout<<"size: "<<v.size()<<endl;//v.size()->O(1)
    for (int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}

int main(){
    vector<string> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }
    printvec(v);

}