
// call and mainn file both are in diffenrt file 

#include<iostream>

#include "classfile.cpp"

using namespace std;


int main(){
    // call the function from classfile.cpp

    Hero h1; // create class object

    cout<<"size : "<<sizeof(h1)<<endl;  
    return 0;
}