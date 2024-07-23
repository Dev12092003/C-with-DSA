#include<iostream>
using namespace std;
int main(){
    int amount;
    cin>>amount;
    char cs;
    cin>>cs;
    int sum=0;
    switch(cs){
        case 100:
        sum=amount/100;
         cout<<sum;
         amount=amount-sum;
         break;
         case 50:
         sum=amount/50;
         cout<<sum;
         amount=amount-sum;
         break;
         case 20:
         sum=amount/20;
         cout<<sum;
         amount=amount-sum;
         default : 
         cout<<"coint chang is noot possible";
         
    }
}