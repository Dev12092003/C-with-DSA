#include<iostream>
using namespace std;

int printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){

    int n;
    cin>>n;
    int arr[n]={0};
    printarray(arr,n);
} 