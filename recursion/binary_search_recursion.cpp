#include<iostream>
using namespace std;

void print(int arr[],int s,int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool binarysearch(int arr[],int s,int e,int key){
    print(arr,s,e);
    //base case
    if(s>e){
        return false;
    }
    int mid=s+(e-s)/2;
    cout<<"value of arr mid:"<<arr[mid]<<endl;
    if(arr[mid]==key){
        return true;
    }

    
    if(arr[mid]<key){
        return binarysearch(arr,mid+1,e,key);
    }
    else if(arr[mid]>key){
        return binarysearch(arr,s,mid-1,key);
    }
}

int main(){
    int arr[6]={2,4,6,10,14,16};
    int size=6;
    int key=15;
    bool ans=binarysearch(arr,0,size-1,key);
    if(ans){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }


    return 0;
}