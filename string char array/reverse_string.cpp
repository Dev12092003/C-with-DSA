#include<iostream>

using namespace std;

void reverce(char name[],int n){ //n =size
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }

}

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

    cout<<"your name:"<<name<<endl;

    int n=getlength(name);
    cout<<"length:"<<n<<endl;
    reverce(name,n);
    cout<<"reversee strring:"<<name;


}