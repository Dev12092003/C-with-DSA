// #include<iostream>
// using namespace std;

// // when we creact object default constructor call

// class Hero{

//     private:
//     int h;   

//     public:      
//     char level; 

//     // parameterised constructor
//     Hero(){
//         cout<<"constructoor call"<<endl;
//     }

//     Hero(int h){
//         cout<<"this -> "<<this <<endl;
//         this->h=h;        // when both name is same than use this key word
//     }

//     void print(){
//         cout<<level<<endl;
//     }     

//     int geth(){
//         return h;
//     }

//     char getlevel(){
//         return level;
//     }

//     void seth(int x){
//         h=x;

//     }
//     char setlevel(char x){
//         level=x;
//     }
    
// };

// int main(){

//     // parameterised constuructor

//     // statically 
//     Hero ramesh(10);
//     cout<<" address of ramesh "<<&ramesh<<endl;
//     ramesh.geth();


//     // dynamically 
//     Hero *h = new Hero(10); //or  Hero *h1 = new Hero();
    

    
//     return 0;
// }



//2

#include<iostream>
using namespace std;

// when we creact object default constructor call

class Hero{

    private:
    int h;   

    public:      
    char level; 

    // defaultt constructor
    Hero(){
        cout<<"constructoor call"<<endl;
    }

    // parameterised constructor
    Hero(int h){
        this->h=h;        // when both name is same than use this key word
    }
    Hero(int h,char level){
        this->level=level;
        this->h=h;        // when both name is same than use this key word
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

    // parameterised constuructor

    // statically 
    Hero ramesh(10);
    ramesh.print();

    // dynamically 
    Hero *h = new Hero(10); //or  Hero *h1 = new Hero();
    h->print();
    
    Hero temp(15,'b');
    temp.print();
    
    return 0;
}