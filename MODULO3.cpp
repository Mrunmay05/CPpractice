#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin>> t;
    for(int i=0;i<t;i++){
        int x,y,count= 0;
        cin>>x>>y;
        if(x%3==0||y%3 == 0){
            cout<<count<<endl;
        }
        else{
            while(x%3!=0 && y%3 !=0 ){
                if(x == y){
                    count += 1;
                    break;
                }
                else{
                    int max_ = max(x,y), min_ = min(x,y);
                    if(x==max_){
                x= max_- min_;}
                else {
                  y= max_- min_;  ;
                }
                count++;
                if (max_ == min_){
                    count++;
                    break;
                    
                }
                }
            }
            cout<<count<<endl;
        }
        
    }
	return 0;
}
