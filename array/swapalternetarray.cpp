#include<iostream>
using namespace std;
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapalternet(int arr[],int size){
    for(int i=0;i<size;i+2){
        if(i+1<size){
        swap(arr[i],arr[i+1]);
        // int temp;
        // temp=arr[i];
        // arr[i]=arr[i+1];
        // arr[i+1]=temp;       why not wworking;
        }
    }
}

int main(){
    int arr[6]={2,4,6,8,0,1};
    int brr[5]={1,3,5,7,9};

    swapalternet(arr,6);
    swapalternet(brr,5);

    printarray(arr,6);
    printarray(brr,5);
}