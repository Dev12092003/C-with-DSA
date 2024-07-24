#include<iostream>
using namespace std;

// not do this 
int& func(int a){
    int num=a;
    int& ans=num;
    return ans;
}
int update(int& n){
    n++;
}

// this is not do 
int* fun(int a){
    int*& ptr=&n;
    return ptr;
}

int main(){

    int n=5;
    cout<<n<<endl;
    update(n);
    cout<<n<<endl;

    fun(n);
    return 0;
}
