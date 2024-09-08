#include<iostream>
using namespace std;

class Hero{

    private:
    int h;   

    public:      
    char level; 

    //default constructor

    Hero(){
        cout<<"constructoor call"<<endl;
    }

    // parameterised constructor
    Hero(int h){
        this->h=h;        
    }
    Hero(int h,char level){
        this->level=level;
        this->h=h;       
    }

    //Copy constrructor
    Hero(Hero &temp){
        cout<<"copy constructor call"<<endl;
        this->level=temp.level;
        this->h=temp.h;
    }

    void print(){
        cout<<"h is "<< this->h<<endl;
        cout<<"level is "<<this->level<<endl;
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


    Hero suresh;
    suresh.seth(80);
    suresh.setlevel('b');
    suresh.print();

    // copy constructor call 
    Hero ritesh(suresh);

    ritesh.print();
   

    
    
    return 0;
}


