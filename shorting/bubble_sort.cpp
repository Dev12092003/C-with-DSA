#include<iostream>
using namespace std;

void bubblesort(int arr[],int n){

    for(int i=1;i<n;i++){
        bool swaped=false; // this is use for best case 
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swaped=true;
            }
        }
    }
    if(swaped==false){// uthis is use for best case  
        break;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){

    int arr[]={5,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);
}
