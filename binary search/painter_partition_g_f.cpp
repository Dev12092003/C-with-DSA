#include<iostream>
using namespace std;
int isPossible(int arr[],int n,int m,int mid){
    int paintercount=1;
    int board=0;

    for(int i=0;i<n;i++){
        if(board+arr[i]<=mid){
            board=arr[i];
        }
        else{
            paintercount++;
            if(paintercount>m ||  (board+arr[i])>mid){
                return false;
            }
            board=arr[i];
        }
    }
    return true;
}
int painterpartition(int arr[],int n,int painter){
    int s=0;
    int sum=0;

    for(int i=0;i<n;i++){
        sum+=arr[i];
    }

    int e=sum;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e){
        if(isPossible(arr,n,painter,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int arr[]{5,5,5,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int painter=2;//total painter

    cout<<painterpartition(arr,n,painter);
}