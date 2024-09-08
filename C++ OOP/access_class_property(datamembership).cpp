#include<iostream>
using namespace std;

class Hero{

    //property
    int level;
    char h;
};

int main(){

    Hero ramesh; // create class object
    
    cout<<"level is : "<<ramesh.level<<endl;  
    cout<<"h is : "<<ramesh.h<<endl;  
    
    return 0;
}


// give error becuse access modifire  by default privet access modifire
// private , public, protected        