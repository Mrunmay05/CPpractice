// #include <bits/stdc++.h>
// using namespace std;
// void printvec(vector<pair<int,int>> &v)
// {
//     cout<<"size: "<<v.size()<<endl;
//     for(int i=0;i<v.size();i++)
//     {
//         cout<<v[i].first<<" "<<v[i].second<<endl;
//     }
// }

// int main(){
//     vector<pair<int,int>> v; //every element of vector is a pair
//     int n;cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         int x,y;
//         cin>>x>>y;
//         v.push_back({x,y});
//     }
//     printvec(v);
//     return 0;
// }

//array of vectors
// #include <bits/stdc++.h>
// using namespace std;
// void printvec(vector<int> &v)
// {
//     cout<<"size: "<<v.size()<<endl;
//     for(int i=0;i<v.size();i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     cout<<endl; 
// }

// int main(){
//     int N;//number of vectors
//     cin>>N;
//     vector<int> v[N]; //every element of the array is a vector
//     for(int i=0;i<N;i++)
//     {
//         int n;//size of each vector
//         cin>>n;
//         for(int j=0;j<n;j++)
//         {
//             int x;
//             cin>>x;
//             v[i].push_back(x);
//         }
//     }    
//     for(int i=0;i<N;i++)
//     {
//         printvec(v[i]);
//     }
//     cout<<v[0][0];
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
void printvec(vector<int> &v)
{
    cout<<"size: "<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl; 
}

int main(){
    int N;//number of vectors
    cin>>N;
    vector<vector<int>> v; //every element of the array is a vector
    for(int i=0;i<N;i++)
    {
        int n;//size of each vector
        cin>>n;
        vector<int> temp;
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }   
    v[0].push_back(10); 
    for(int i=0;i<v.size();i++)
    {
        printvec(v[i]);
    }
    cout<<v[0][0];
    return 0;
}