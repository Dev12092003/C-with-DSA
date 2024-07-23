#include<iostream>
using namespace std;

int iseven(int n){
    if(n&1){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    int n;
    cin>>n;
    if(iseven(n)){
        cout<<"number is even";
    }
    else{
        cout<<"number is odd";
    }
}