#include<iostream>
using namespace std;

int main(){
    int num=5;
    
    cout<< num<<endl;

    //address of operator
    cout<<"adddress of num is : "<< &num <<endl; // in hexa decimal form give address

    // pointer need = it stor the address 
    int *ptr = &num;

    cout<<"  ptr address : "<< ptr <<endl; // this written the num address
    cout<<" ptr value : "<< *ptr <<endl; // this  written the value hold by num

    double d=4.2;
    double *ptr1 = &d;
    cout<<"  ptr1 address : "<< ptr1 <<endl;
    cout<<"  ptr1 value : "<< *ptr1 <<endl;

    cout<<"size of int :"<<sizeof(num)<<endl; //4
    cout<<"size of pointer :"<<sizeof(ptr)<<endl; // 8

    cout<<"size of double :"<<sizeof(d)<<endl; // 8
    cout<<"size of pointer :"<<sizeof(ptr1)<<endl; //8

    return 0;
}