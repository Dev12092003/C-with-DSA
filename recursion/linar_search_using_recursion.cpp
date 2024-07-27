#include<iostream>
using namespace std;

void print(int arr[],int size){
    cout<<"size of array "<<size<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool linearsearch(int arr[],int size,int key){
    print(arr,size);
    //base case 
    if(size==0){
        return 0;
    }
    if(arr[0]==key){
        return true;
    }
    else{
        bool next=linearsearch(arr+1,size-1,key);
        return next;
    }


}

int main(){
    int arr[5]={3,5,1,2,4};
    int size=5;
    int key=2;

    bool ans=linearsearch(arr,size,key);
    if(ans){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }

    return 0;
}