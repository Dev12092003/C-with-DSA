#include<iostream>
using namespace std;


void update(int **p2){
    //p2=p2+1;  // kuch change nahi ho raha he - no change 
    
    //*p2=*p2+1; // kuch change hoga - yes p ka address change ho rahi he 

    **p2=**p2+1; // kuch change ho raha he - yes i ki value change ho rahi he
    

}


int main(){
    
    int i=5;
    cout<<i<<endl;
    int *p=&i;   // int* p=&i;
    int **p2=&p; // int** p2=&p; 
    
    // cout<<"run"<<endl;
    // cout<<"print p: "<<p<<endl;
    // cout<<"address of p:"<<*p<<endl; 

    // cout<<"print p2: "<<p2<<endl;
    // cout<<"address of p2:"<<**p2<<endl; 

    // //i valu print
    // cout<<i<<endl;
    // cout<<*p<<endl;
    // cout<<**p2<<endl;

    // // address of i
    // cout<<&i<<endl;
    // cout<<p<<endl;
    // cout<<*p2<<endl;

    // // address of p
    // cout<<&p<<endl;
    // cout<<p2<<endl;

    cout<<"before: "<<i<<endl;
    cout<<"before: "<<p<<endl;
    cout<<"before: "<<p2<<endl;
    update(p2);
    cout<<"after: "<<i<<endl;
    cout<<"after: "<<p<<endl;
    cout<<"after: "<<p2<<endl;


    return 0;
}