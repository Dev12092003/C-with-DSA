#include<iostream>
using namespace std;

class Human{
    protected:
    int height;
    public:
    int weight;
    private:
    int age;

    public:
    int getage(){
        return this->age;
    }
    void setweight(int w){
        this->weight = w;
    }
};

class Male: public Human{

    public:
    string color;

    void sleep(){
        cout<<"male sleeping"<<endl;
    }

    int getheight(){
        return this->height;
    }
};

int main(){
    Male m1;
    //cout<<m1.height<<endl; // tgis will not work in protected so we creat the getheight so protectd can access in chield
    cout<<m1.getheight()<<endl;




/*
    Male object1;
    cout<<object1.age<<endl; //    give this error if we acce the private in the child using public
    //inheritance.cpp: In function 'int main()':
//inheritance.cpp:33:19: error: 'int Human::age' is private within this context
//     cout<<object1.age<<endl;
                   ^~~
//inheritance.cpp:9:9: note: declared private here
//     int age;
    cout<<object1.weight<<endl;
    cout<<object1.height<<endl;
    

    cout<<object1.color<<endl;
    object1.sleep();

    cout<<object1.weight<<endl;
    object1.setweight(100);
    cout<<object1.weight<<endl; */


    return 0;
}