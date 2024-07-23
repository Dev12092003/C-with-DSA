#include<iostream>
using namespace std;
int main(){
    char sy;
    cin>>sy;
    cout<<"ener number one";
    int n;
    cin>>n;
    cout<<"enter number two";
    int n1;
    cin>>n1;
    switch(sy){
        case '+':{cout<<n+n1;
        break;}
        case '-':cout<<n-n1;
        break;
        case '*':cout<<n*n1;
        break;
        case '/':cout<<n/n1;
        break;
        default :cout<<"you choose wrong symbol";

    }
}