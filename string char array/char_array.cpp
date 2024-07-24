#include<iostream>
#include<cstring>

using namespace std;

int getlength(char name[]){
    int count=0;
    for(int i=0;name[i] != '\0';i++){
        count++;
    }
    return count;
}

int main(){

    char name[20];
    cout<<"enter your name:";
    cin>>name;
    //name[2]='\0'; //null character  

    cout<<"your name is:"<<name<<endl; // if we do Dev Patel than it only print Dev 


    cout<<"length of string:"<<getlength(name)<<endl;
    char uu[]="heeee";
    int len=strlen(uu);
    cout<<"len usin in built:"<<len<<endl;



}
