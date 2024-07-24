#include<iostream>
using namespace std;

int reachhome(int src,int dest){
    //base case
    cout<<"source "<<src<<" destination "<<dest<<endl;
    if(src==dest){
        cout<<"reach home"<<endl; 
        return 0;
    }
    
    //processing
    src++;

    //recursive call
    reachhome(src,dest);
}
int main(){

    int dest=10;
    int src=1;
    reachhome(src,dest);
}