#include<iostream>
#include<set>

using namespace std;

int main(){

    set<int> s;
    s.insert(0);
    s.insert(5);
    s.insert(5); //set not print same element 

    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;

    set<int> :: iterator it=s.begin();
    it++;

    s.erase(it);
    for(auto i:s){
        cout<<i<<" ";
    }

    cout<<"5 is present or not  "<<s.count(5)<<endl;
    
}