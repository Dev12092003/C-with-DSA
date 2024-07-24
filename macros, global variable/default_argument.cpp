#include<iostream>
using namespace std;
// default variable always start with right most
//void print(int arr[],int n,int start=0) - true
//void print(int arr[],int n=0,int start) - false
//void print(int arr[],int n=0,int start=0) - true
void print(int arr[],int n,int start=0){  // here we want to make start optional 
    for(int i=start;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    print(arr,5,2);
    print(arr,5);  

    return 0;
}