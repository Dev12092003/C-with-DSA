//lcm(a,b) * gcd(a,b) = a*b ;
//gcd(a,b)=gcd(a-b,b)
//or
//gcd(a,b)=gcd(a%b,b)

#include<iostream>

using namespace std;

int gcd(int a,int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }

    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}
int main(){
    int a,b;
    cout<<"enter value of a and b:";
    cin>>a>>b;
    cout<<endl;
    int ans=gcd(a,b);
    cout<<"gsd is:"<<ans<<endl;


}
