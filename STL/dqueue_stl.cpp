#include <iostream>
#include<deque>

using namespace std;

int main(){

    deque<int> d;
    d.push_back(1); //inster at end
    d.push_front(2); // insert at first 

    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    //d.pop_front(); // remove first elemnt 
    //d.pop_back(); // removee last element 
    for(int i:d){
        cout<<i<<" ";
    }

    cout<<"print first element "<<d.at(1)<<endl;
    cout<<"front "<<d.front()<<endl;
    cout<<"back "<<d.back()<<endl;

    cout<<"empty or not "<<d.empty()<<endl;
    
    cout<<"befor erase "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase "<<d.size()<<endl;
    for(int i:d){
        cout<<i<<" ";
    }


}