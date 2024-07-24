#include<iostream>
using namespace std;
int main(){
    int number[10];
    cout<<number[0]<<endl;
    cout<<number[1]<<endl;
    //cout<<number[16];//whhy not give error this statement give error

    int n[3]={5,7,1};
    cout<<n[0];
    cout<<n[1];  
    cout<<n[2]<<endl;


    int nu[15]={2,2};
    cout<<nu[0];
    cout<<nu[1];
    cout<<nu[2]<<endl;
    for(int i=0;i<15;i++){
        cout<<nu[i]<<endl;
    }
    cout<<endl;

    int u[15]={0};
    for(int i=0;i<15;i++){
        cout<<u[i]<<"\n";
    }
    return 0;
}