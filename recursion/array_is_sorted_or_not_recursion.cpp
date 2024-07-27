// array is sorted or not

#include<iostream>
using namespace std;
bool issorted(int arr[],int n){
    //base case
    if(n==0||n==1){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remaning=issorted(arr+1,n-1);
        return remaning;
    }


}

int main(){
    int arr[5]={2,4,6,8,10};
    int size=5;

    bool ans=issorted(arr,size);

    if(ans){
        cout<<"array is sorted";
    }
    else{
        cout<<"array is not sorted";
    }
    return 0;
}