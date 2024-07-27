#include<iostream>
using namespace std;

bool palindrom(string str,int i,int j){
    //base case
    if(i>j){
        return true;
    }


    if(str[i]!=str[j]){
        return false;
    }
    else{
        //recursion call
        return palindrom(str,i+1,j-1);
    }

}

int main(){
    string s="abccba";
    cout<<endl;

    bool ispalindrom=palindrom(s,0,s.length()-1);

    if(ispalindrom){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }


    return 0;
}