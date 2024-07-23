#include<iostream>
using namespace std;

//global variable p=1;
//local variable p=2 cout <<p; output is 2 because local variable takes precidence
//if we use global as same name as locla inn the main funcetion we use :: scope resolution parameter
//socpe of variable
// frome where the variable is accessible
// int main(){
//     int apple=5; //here apple variable in the the accessible in this {} bracket
//     cout<<apple;
//     return 0;
// }

// void main(){
//     cout<<apple; //here we can not able to access the apple variable iint he void function 
// }
//pass by value
// void changevalue(int a){
//     a=100;//formal
// }
// int main(){
//     int x=1;
//     changevalue(x); //actual
//     cout<<x;
//     return 0;
// }

//pass by reference
// void changevalue(int &a){ //her not creat copy variable so it creat memory ocation it not creat new 
//     a=100;
// }
// int main(){
//     int x=1;
//     changevalue(x); 
//     cout<<x;
//     return 0;
// }
int add(int a,int b=1,int c=2){ //here we give defalut value
    return a+b+c;
}
int main(){
    cout<<add(3); 
    cout<<add(2,3);
    cout<<add(2,3,4);
    return 0;
}