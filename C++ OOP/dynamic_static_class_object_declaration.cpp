#include<iostream>
using namespace std;

class Hero{


    private:
    int h;   


    public:          
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

    void seth(int x){
        h=x;
    }
    char setlevel(char x){
        level=x;
    }
    
};

int main(){

    //static allocaation
    Hero ramesh; // create class object
    ramesh.seth('b');
    ramesh.setlevel(80);
    cout<<" level is "<<ramesh.level<<endl;
    cout<<" h is "<<ramesh.geth()<<endl;


    // dynamic allocation
    Hero *h= new Hero;
    h->setlevel('a');
    h->seth(90);

    cout<<" level is "<<(*h).level<<endl;
    cout<<" h is "<<(*h).geth()<<endl;
    // or 
    cout<<" level is "<<h->level<<endl;
    cout<<" h is "<<h->geth()<<endl;


    
    
    
    return 0;
}