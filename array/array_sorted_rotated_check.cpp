#include<iostream>
#include<vector>

using namespace std;

bool check(int nums[],int n){

    int count=0;
    for(int i=0;i<n;i++){

        if(nums[i-1]>nums[i]){
            count++;
        }
    }

    if(nums[n-1]>nums[0]){
        count++;
    }
    return count<=1;
}
int main(){

    int arr[]={3,4,5,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    bool result=check(arr,n);
    if(result){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}