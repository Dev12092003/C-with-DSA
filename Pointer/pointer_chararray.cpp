#include<iostream>
using namespace std;

int main(){

    int arr[5]={1,2,3,4,5};
    int *a=&arr[0];
    cout<<arr<<endl;
    cout<<a<<endl; 
    cout<<*a<<endl;
    

    cout<<"--------"<<endl;
    char ch[6]="abcde";    //we give one extra spce for the termination '/0' 
    cout<<ch<<endl;  // print string insted of address
    char *c=&ch[0];
    cout<<c<<endl; //pritn string abcde
    cout<<*c<<endl; 

    cout<<"---------"<<endl;
    char temp='z';
    char*p=&temp;
    cout<<p<<endl;

    return 0;
}