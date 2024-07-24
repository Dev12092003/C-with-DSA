#include<iostream>

using namespace std;

int firstoccurrence(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(key > arr[mid]){ //right go
            start=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;

        }
        mid=start+(end-start)/2;

    }
    return ans;
}
int lastoccurrence(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(key > arr[mid]){ //right go
            start=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;

        }
        mid=start+(end-start)/2;

    }
    return ans;
}


int main(){
    int odd[15]={1,2,3,3,3,3,3,3,3,3,3,3,3,3,5};
    cout<<"First occurrence of 3 is at index "<<firstoccurrence(odd,15,3)<<endl;
    cout<<"last occurenc of 3 is at index "<<lastoccurrence(odd,15,3);

}
