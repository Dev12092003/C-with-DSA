#include<iostream>
using namespace std;

int getsum(int *arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){ 
        sum+=arr[i];
    } 
     return sum;
}
int main(){
    // char ch='q';
    // cout<<sizeof(ch)<<endl;

    // char* c=&ch;
    // cout<<sizeof(c)<<endl; //8      
    

    // cerate heap memory
    int n;
    cin>>n;
    int* arr=new int[n];

    //taking input in array
    for(int i=0;i<n;i++){
        cin>>arr[i];    
    }
    int ans =getsum(arr,n);

    cout<<"answer: "<<ans<<endl;


    return 0;
}
