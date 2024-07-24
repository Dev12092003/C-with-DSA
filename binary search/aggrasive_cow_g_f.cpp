#include<iostream>
#include<algorithm>
using namespace std;
int isPossible(int arr[],int n,int k,int mid){
    int cowcount=0;
    int lastposition=arr[0];

    for(int i=0;i<n-1;i++){
        
        if(arr[i]-lastposition >= mid){
            cowcount++;
            if(cowcount ==k){
                return true;
            }
            lastposition=arr[i];
        }
    }

}
int aggrasivecow(int arr[],int n,int k){ // n=size ,k =cows
    sort(arr,arr + n); //sort array
    int s=0;
    int maxi=-1;
    for(int i=0;i<n-1;i++){
        maxi=max(arr[i],maxi);
    }
    int e=maxi;
    int ans=-1;
    int mid=s+(e-s)/2;

    while(s<=e){
        if(isPossible(arr,n,k,mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
}
int main(){
    int arr[]={4,2,1,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    //cout<<n<<endl;
    int cow=2;
    cout<<aggrasivecow(arr,n,cow);
}