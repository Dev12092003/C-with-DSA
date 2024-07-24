#include<iostream>
using namespace std;
void insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){ // left <- 
                arr[j+1]=arr[j];
            }
            else{
                break; //right->
            }
        }
        arr[j+1]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={10,2,5,9,8,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertionsort(arr,n);
}