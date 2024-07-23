#include<iostream>
#include<cmath>
using namespace std;
void welcome(){
    cout<<"you are using the void function";
}
int sum(int a,int b){
    return a+b;
}
int sum(int a,int b, int c){
    return a+b+c;
}
float sum(float a,float b){ //fomal parameter
    return a+b;
}

//bulit in function 
//pow(a,b)=a resto b;
//sqrt(a)
int main(){
    int n,m,j;
    float n1,m1;
    n=5;
    m=6;
    j=7;
    m1=1.2;
    n1=1.0;
    //cin>>n>>m;
    //cin>>n1>>m1;
    //cin>>n>>m>>j;
    //cout<<sum(n,m); //actul parameter 
    //cout<<sum(n,m,j);
    //cout<<sum(n1,m1);
    //welcome();
    cout<<pow(2,3);
    cout<<sqrt(24);
    int x=24;
    cout<<sqrt(x);   //sqrt taks input as doouble and give anser as double
    return 0;
}