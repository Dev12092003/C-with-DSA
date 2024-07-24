#include<iostream>
using namespace std;

int main(){

    //int arr[10]={2,5,6};

    /*
    cout<<"address of first momory of arr :"<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<"address of first momory of arr :"<<&arr[0]<<endl;
    cout<<"address of second momory of arr :"<<&arr[0]+1<<endl;
    cout<<"value of the first location  :"<<*arr<<endl;
    cout<<"value of the first location with add 1  :"<<*arr+1<<endl;
    cout<<"value of the first location with add 1 :"<<*(arr)+1<<endl;
    cout<<"value of the second location :"<<*(arr+1)<<endl;
    

    int i=2;
    cout<<i[arr]<<endl; 
    cout<<arr[i]<<endl;
    

    int temp[10]={1,2};
    cout<<sizeof(temp)<<endl;
    cout<<sizeof(*temp)<<endl; // 4 
    cout<<sizeof(&temp)<<endl; // 8

    int *ptr=&temp[0];
    cout<<sizeof(ptr)<<endl; // 8

    cout<<sizeof(*ptr)<<endl; // 4

    cout<<sizeof(&ptr)<<endl; // 8
    */

    /*int a[15]={1,3,5};
    cout<<&a[0]<<endl;
    //cout<<&a<<endl;
    //cout<<a<<endl;

    int *p=&a[0];
    //cout<<p<<endl;
    //cout<<*p<<endl;
    cout<<&p<<endl;*/

    int arr[10];
    //arr=arr+1; // give error because can not reasign addres for array 
    int *ptr=&arr[0];
    cout<<ptr<<endl;
    ptr=ptr+1;
    cout<<ptr<<endl;



    



    return 0;
}