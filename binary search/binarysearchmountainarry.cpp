#include <iostream>

using namespace std;

int peakelement(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int main(){
    int arr[]={3,4,5,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<peakelement(arr,n);
}
