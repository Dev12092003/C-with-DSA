#include<iostream>
using namespace std;

// public is accessible inside the class and outside of class 

// 1
// class Hero{

//     //property
//     public:          // what ever is under the public that is accessible by out side of class also 
//     int level;
//     char h;
// };

// int main(){

//     Hero ramesh; // create class object
    
//     cout<<"level is : "<<ramesh.level<<endl;  
//     cout<<"h is : "<<ramesh.h<<endl;  
    
//     return 0;
// }


//2
// class Hero{

//     //property
     
//     int level;  // herr by default the leve is privet so it give error
//     public:          // what ever is under the public that is accessible by out side of class also
//     char h;
// };

// int main(){

//     Hero ramesh; // create class object
    
//     cout<<"level is : "<<ramesh.level<<endl;  
//     cout<<"h is : "<<ramesh.h<<endl;  
    
//     return 0;
// }


//3
// class Hero{

//     //property
     
//     int level;  // herr by default the level is privet so it give error
//     char h;      // herr by default the h is privet so it give error
//     public:          // what ever is under the public that is accessible by out side of class also
// };

// int main(){

//     Hero ramesh; // create class object
    
//     cout<<"level is : "<<ramesh.level<<endl;  
//     cout<<"h is : "<<ramesh.h<<endl;  
    
//     return 0;
// }


// access the value of class 

//4
class Hero{

    //property
    public:          // what ever is under the public that is accessible by out side of class also
    int level;  
    char h; 
    void print(){
        cout<<level<<endl;
    }     
    
};

int main(){

    Hero ramesh; // create class object
    
    ramesh.level=10;
    ramesh.h='a';
     
     
    cout<<"level is : "<<ramesh.level<<endl;  
    cout<<"h is : "<<ramesh.h<<endl;  
    
    return 0;
}