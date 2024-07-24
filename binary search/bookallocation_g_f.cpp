
// this code using binary search 

#include<iostream>
using namespace std;
int isPossible(int arr[],int n,int m,int mid){
    int studentcount=1;
    int pagesum=0;

    for(int i=0;i<n;i++){
        if(pagesum+arr[i]<=mid){
            pagesum +=arr[i];
        }
        else{
            studentcount++;
            if(studentcount>m||arr[i]>mid){
                return false;
            }
            pagesum=arr[i];
        }
    }
    return true;
}
int bookallocation(int arr[],int n,int m){ //arr=array,n=size,m=number of student
    int s=0;
    int sum=0;
    int ans;

    for(int i=0;i<n;i++){
        sum+=arr[i];
    }

    int e=sum;
    int mid=s+(e-s)/2;

    while(s<=e){
        if(isPossible(arr,n,m,mid)){
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
    int arr[]={10,20,30,40};
    int student=2;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<bookallocation(arr,n,student);

}