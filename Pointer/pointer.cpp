#include<iostream>
using namespace std;

int main(){

    // pointer is created and pointing to some garbage address
    // int *p;

    // cout<<p<<endl;
    // cout<<*p<<endl;

    /*// two way to declar pointer bithe give same value
    int i=5;
    int *p=&i;
    cout<<p<<endl;
    cout<<*p<<endl;

    int *q=0;
    q=&i;
    cout<<q<<endl;
    cout<<*q<<endl;*/

    int num=5;
    int a=num;
    a++;

    cout<<num<<endl; // here we incre the valu of a which referanc the num but the num valur can not be chang
    cout<<a<<endl;

    cout<<endl;
    int n=5;
    int *p=&num;
    cout<<"before "<<num<<endl;
    cout<<"before "<<*p<<endl;
    (*p)++;
    cout<<"after "<<num<<endl;
    cout<<"after "<<*p<<endl;
    num++;
    cout<<"after "<<num<<endl;
    cout<<"after "<<*p<<endl;


    cout<<"----------------"<<endl;
    //coping a pointer  
    int *q=p;
    cout<<p<<"-"<<q<<endl;
    cout<<*p<<"-"<<*q<<endl;

    cout<<"----------------"<<endl;
    
    //importan concept
    int i=3;
    int *t=&i;
    // cout<<*t++<<endl;
    // cout<<(*t)++<<endl;
    cout<<*t<<endl;
    *t=*t+1; //(*t)++ same 
    cout<<*t<<endl;

    cout<<t<<endl;
    t=t+1;
    cout<<t<<endl; 



    return 0;
}