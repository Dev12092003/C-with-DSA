#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    vector<int> a(5,1); //a(5,1) wher 5 is size and 1 is all teh assigen value 1

    vector<int> b(a); //copy the vector a into b
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;

    for(int i:b){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"capacity "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity "<<v.capacity()<<endl; //for thse vector create double size of vector when we inster new elemnt and vector not have space 
    cout<<"size "<<v.size()<<endl;//this give the current size of vector 
    
    cout<<"give tnhe element at 2 index "<<v.at(2)<<endl;
    cout<<"give tnhe element at 2 index "<<v[2]<<endl;

    cout<<"front "<<v.front()<<endl;
    cout<<"end "<<v.back()<<endl;

    cout<<"befor pop ";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    
    v.pop_back();

    cout<<"after pop ";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"befor clear "<<v.size()<<endl;
    cout<<"befor capacity "<<v.capacity()<<endl;

    v.clear();
    cout<<"after clear "<<v.size()<<endl;
    cout<<"after capacity "<<v.capacity()<<endl;

    // v.capacity() -> give the how much space is there
    // v.size() -> give the how much elemet in the vector
    // v.push_back() -> inster the elment in the vector
    // v.at(2) -> give the second index element 
    // v[2] -> give the second index element 
    // v.pop_back() ->remove lastt element 
    // v.clear() -> it clear all the elemt in the vector but the capacity can not change 


}
