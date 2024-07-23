#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    while(n!=0){
        int digit=n%10;
        if((sum>INT_MAX/10)||(sum<INT_MIN/10)){
            return 0;
        }
        sum=(sum*10)+digit;
        n=n/10;
    }
    cout<<sum;

}