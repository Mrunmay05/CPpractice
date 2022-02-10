#include <iostream>
using namespace std;

int main(){
   int t;
   cin>>t;
   while(t--)
   { 
    int n,x;
    cin>>n>>x;
    n++;
    cout<<x%n<<endl;
   }
   return 0;
}