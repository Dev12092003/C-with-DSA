#include<iostream>
using namespace std;
int selectionsort(int arr[],int n){ //n=size

    for(int i=0;i<n-1;i++){
        int minindex=i;

        for(int j=i+1;j<n;j++){
            if(arr[minindex]>arr[j]){
                minindex=j;
            }
        }
        swap(arr[minindex],arr[i]);
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={1,9,5,2,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr,n);
}