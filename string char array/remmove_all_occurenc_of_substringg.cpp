// s="daabcbaabcbc" , part="abc"  -> "dab"  

#include<iostream>

using namespace std;

string removeOccurenc(string s,string part){

    while(s.length() !=0 && s.find(part)<s.length()){ //baj thak string khatam na ho jaye and parth ki length string se badi nahi honi chahi ae
        s.erase(s.find(part),part.length()); 
    }
    return s;
}

int main(){
    string str;
    cout<<"enter the string";
    cin>> str;
    string part;
    cout<<"enter part :";
    cin>>part;
    cout<<removeOccurenc(str,part);
}