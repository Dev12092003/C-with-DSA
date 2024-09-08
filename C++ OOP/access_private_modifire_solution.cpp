
// how we can access the private access modifire out side of class also 
// using geter / seter


#include<iostream>
using namespace std;

// privet is only accessible inside the class


class Hero{

    //property

    private:
    int h;   // to access the level outside of class we use getr/ seter


    public:          // what ever is under the public that is accessible by out side of class also 
    char level; 

    void print(){
        cout<<level<<endl;
    }     

    int geth(){
        return h;
    }

    char getlevel(){
        return level;
    }

    void seth(int x,char name){
        //1
        //h=x;
        if(name=='a'){
            h=x;
        }

    }
    char setlevel(char x){
        level=x;
    }
    
};

int main(){

    Hero ramesh; // create class object

    cout<<" ramesh h is : "<<ramesh.geth()<<endl;
    ramesh.seth(80,'b');
    ramesh.level='a';
     
     
    cout<<"h is : "<<ramesh.geth()<<endl;   
    cout<<"level is : "<<ramesh.level<<endl;  

    
    
    return 0;
}