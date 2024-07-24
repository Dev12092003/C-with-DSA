#include<iostream>
#include<map>

using namespace std;

int main(){

    map<int,string> m;

    m[1]="he";
    m[3]="you";
    m[2]="uu";

    m.insert({5,"gugu"});

    cout<<"befor erase "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;

    }

    
    cout<<endl;

    cout<<"finding 3 :"<<m.count(3)<<endl; // 0 - no, 1 - yes

    cout<<"after erase "<<endl;
    m.erase(3);

    for(auto i:m){
         cout<<i.first<<" "<<i.second<<endl;
    }

    //find
    auto it=m.find(5);
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }

}