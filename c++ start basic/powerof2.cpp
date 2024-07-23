#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    int ans=1;
    cin>>n;
    for(int i=1;i<=30;i++){
        cout<<ans;
         if (ans==n){
            cout<<"enter value is in the power of 2";
        }
        if(ans<INT_MAX/2){
         ans=pow(2,i); }
    }
    return false;
    
}