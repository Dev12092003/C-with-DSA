
// move all the zero in right side of array 

#include<iostream>
#include<array>

using namespace std;

int main(){
    int arr[]={0,1,0,0,3,12,0};
    int nonzero=0;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int j=0;j<size;j++){
        if(arr[j]!=0){
            swap(arr[j],arr[nonzero]);
            nonzero++;
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}