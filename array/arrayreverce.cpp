#include<iostream>
using namespace std;

void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void reverce(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}
int main(){
     int arr[6]={9,5,3,6,1,0};
     int brr[5]={9,8,7,6,5};

     reverce(arr,6);
     reverce(brr,5);

     printarray(arr,6);
     printarray(brr,5);
      
}