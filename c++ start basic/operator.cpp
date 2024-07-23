#include<iostream>
using namespace std;
int main(){
    
    int num1=8;
    int num2 = 9;

     //aerithmetic
     cout<<num1+num2<<endl;
     cout<<num1-num2<<endl;
     cout<<num1*num2<<endl;
     cout<<num1/num2<<endl;
     cout<<num1%num2<<endl;

    
     cout<<(num1==num2)<<endl;
     cout<<(num1!=num2)<<endl;
     cout<<(num1>=num2)<<endl;


     bool exp1= true;
     bool exp2=false;
     cout<<(exp1&&exp2)<<endl;
     cout<<(exp1||exp2)<<endl;
     cout<<(!exp1)<<endl;

     num1+=3;
     cout<<num1<<endl;
     num2-=3;
     cout<<num2<<endl;

    int sh=9;
    cout<<(sh<<1)<<endl;
    cout<<(sh>>1)<<endl;

    //operator
    cout<<sizeof(sh)<<endl;

    return 0;
}
