#include<iostream>
using namespace std;

int counting(int n){
    //tail recursion  // 8 7 6 5 4 3 2 1
    //base case
    if(n==0){
        return 0;
    }
    //processing
    cout<<n <<endl;

    //recursive relation
    counting(n-1);
    

    /*
    //head recursion   // 1 2 3 4 5 6 7 8
    //base case
    if(n==0){
        return 0;
    }

    //recursive relation
    counting(n-1);

    //processing
    cout<<n <<endl;
    */
}
int main(){

    int n;
    cin>>n;

    int ans=counting(n);
    cout<<ans;
    return 0;
}