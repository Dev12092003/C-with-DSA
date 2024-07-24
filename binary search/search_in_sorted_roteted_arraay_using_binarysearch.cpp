#include<iostream>
using namespace std;

int pivotelement(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}

int binarysearch(int arr[],int start,int end,int key){
    int s=start;
    int e=end;
    int mid=s+(e-s)/2;

    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}

int main(){
    int arr[]={7,9,1,2,3};
    int k=2;
    int n=sizeof(arr)/sizeof(arr[0]);
    int pivot=pivotelement(arr,n);
    if(k>=arr[pivot] && k<=arr[n-1]){
        cout<<binarysearch(arr,pivot,n-1,k); //using this we find value in 2 line
        //return binarysearch(arr,pivot,n-1,k); //using this we find value in 2 line
    }
    else{
        cout<<binarysearch(arr,0,pivot-1,k); // using this we find value in 1 line
        //return binarysearch(arr,0,pivot-1,k); // using this we find value in 1 line
    }
    //this code return index of that element 
    // if not  found then return -1
}