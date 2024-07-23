#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int ncr(int n,int r){
    int num=factorial(n);
    int denomater=factorial(r)*factorial(n-r);
    return num/denomater;

}
int main(){
    int n;
    int m;
    cin>>n;
    cin>>m;
    int ans=ncr(n,m);
    cout<<ans;

}





/* factorial code
#include<iostream>
using namespace std;

int ncr(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;

}
int main(){
    int n;
    cin>>n;
    int ans=ncr(n);
    cout<<ans;

}*/