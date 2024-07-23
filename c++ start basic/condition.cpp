#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>18){
        cout<<"you are eligible for vote";
    }
    else if(n==18){
        cout<<"wait ";
    }
    else{
        cout<<"you are not eligible for vote";
    }

    int day;
    cin>>day;
    switch(day){
        case 1:
        cout<<"yes";
        break;

        case 2:
        cout<<"no";
        break;
        
        default: 
        cout<<"nnn";
    }
    
    return 0;
}