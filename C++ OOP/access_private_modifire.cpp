#include<iostream>
using namespace std;

// privet is only accessible inside the class


class Hero{

    public:          // what ever is under the public that is accessible by out side of class also
    int level;  

    private:    // private is onnly accessible inside the class 
    char h;     // herr we declare the leve is privet so it give error
    void print(){
        cout<<level<<endl;
    }

};

int main(){

    Hero ramesh; // create class object
    
    cout<<"level is : "<<ramesh.level<<endl;  
    cout<<"h is : "<<ramesh.h<<endl;  
    
    return 0;
}