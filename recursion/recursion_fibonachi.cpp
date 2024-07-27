#include<iostream>
using namespace std;

/*
int fib(int n) {
        if (n == 0 || n == 1) return n;
        int a = 0, b = 1, c;
        for (int i = 2; i <= n; ++i) {
            c = a + b;
            a = b;
            b = c;
        }
        return c;
*/

int fibonachi(int n){
    //base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    //recursion call
    int ans;
    ans=fibonachi(n-1)+fibonachi(n-2);
    
    return ans;
}
int main(){

    int n;
    cout<<"enter the pnumber of fibonachi "<<endl;
    cin>>n;
    
    int ans=fibonachi(n);
    cout<<ans;

    return 0;
}