#include<iostream>
using namespace std;


void print(int *p){

    cout<<*p<<endl;
}

void update(int *p){

    // this for address updatwe which is not update the main fuction  
    // p=p+1;
    // cout<<"inside function p :"<<p<<endl;

    // this is for the valu update which us also update in the main function
    *p=*p+1;
    cout<<"inside function *p :"<<*p<<endl;
}


int getsum(int *arr,int n){  // *arr same as arr[] give same answer
    cout<<"Size: "<<sizeof(arr)<<endl; // 8 
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];  //arr[i] same as i[arr]
    }
    return sum;
}

int main(){
    /*
    int value=5;
    int *p=&value;
    //print(p);

    // cout<<"before:"<<p<<endl;
    // update(p);
    // cout<<"after:"<<p<<endl;

    cout<<"before *p:"<<*p<<endl;
    update(p);
    cout<<"after main function *p :"<<*p<<endl; */

    int arr[5]={1,2,3,4,5};
    cout<<"Sum is :"<<getsum(arr,5)<<endl; // 15

    cout<<"Sum is :"<<getsum(arr+3,2)<<endl; // 9

    
    return 0;
}