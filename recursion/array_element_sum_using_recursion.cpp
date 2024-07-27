#include<iostream>
using namespace std;

int dosum(int arr[],int size){
    //base case
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }

    //recursion  call
    int ans=0;
    ans=arr[0]+dosum(arr+1,size-1);

    return ans;
}

int main(){

    int arr[5]={1,2,3,4,5};
    int size=5;

    int ans=dosum(arr,size);
    cout<<"sum is:"<<ans<<endl;

    return 0;
}