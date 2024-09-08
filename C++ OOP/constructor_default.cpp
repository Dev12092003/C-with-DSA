#include<iostream>
using namespace std;

// when we creact object default constructor call

class Hero{

    private:
    int h;   

    public:      
    char level; 

    Hero(){
        cout<<"constructoor call"<<endl;
    }

    void print(){
        cout<<level<<endl;
    }     

    int geth(){
        return h;
    }

    char getlevel(){
        return level;
    }

    void seth(int x){
        h=x;

    }
    char setlevel(char x){
        level=x;
    }
    
};

int main(){

    // default constructrue 

    // 1
    // cout<<"hi"<<endl;
    // Hero ramesh; // create class object
    // cout<<"hello"<<endl;


    // statically 
    Hero raamesh;

    // dynamically 

    Hero *h = new Hero;
    Hero *h1 = new Hero();

    
    return 0;
}