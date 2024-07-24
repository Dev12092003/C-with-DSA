#include<iostream>

using namespace std;

bool valid(string s){
    if((s>='a' && s<='z')||(s>='A' && s<='Z') || (s>='0' && s<='9')){
        return true;

    }
    return 0;
}

char toLower(char ch){
    if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}

bool checkpalindrom(string s){
    int s=0;
    int e=s.length()-1;

    while(s<e){
        if(s[s] != s[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

bool ispalindrom(string s){
    string temp="";

    //remove unnecurry charater 
    for (int i=0;i<s.length();i++){
        if(valid(s[i])){
            temp.push_back(s[i]);
        }
    }

    //conveert to lower 
    for(int i=0;i<temp.length();i++){
        temp[i]=toLower(temp[i]);
    }

    //check palindrom
    return checkpalindrom(temp);
}
int main(){
    string s;
    cout<<"enter string:";
    cin>>s;
    cout<<"your string is:"<<s<<endl;

    if(ispalindrom(s)){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }



    
}