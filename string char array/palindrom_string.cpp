#include<iostream>

using namespace std;

char toLower(char name){
    if(name>='a' && name<='z'){
        return name;
    }
    else{
        char temp=name- 'A' + 'a' ;
        return temp;
    }
}
int getlength(char name[]){
    int count=0;
    for(int i=0;name[i] != '\0';i++){
        count++;
    }
    return count;
}

bool checkchar(char name){
    if((name>='a' && name<='z') || (name>='A' && name<='Z') || (name>='0' && name<='9')){
        return true;
    }
    else{
        return false;
    }
}

bool checkpalindrom(char name[],int n){
    int s=0;
    int e=n-1;

    while(s<e){
    
        if(s<=e){
            if(toLower(name[s++])!=toLower(name[e--])){
                return false;
            }              
        }
        else{
            while(s<=e && !checkchar(name[s])){
                s++;
            }
            while(s<=e && !checkchar(name[e])){
                e--;
            }
        }
    }
    return true;

}
int main(){
    //car reverece rac same than paliindrom 
    //bob bob

    char name[20];
    cout<<"enter name ";
    cin>>name;
    

    cout<<"your name"<<name<<endl;

    //cout<<"character is to lower:"<<toLower(name)<<endl;
    int n=getlength(name);
    cout<<"length:"<<n<<endl;

    if(checkpalindrom(name,n)){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no";
    }
}