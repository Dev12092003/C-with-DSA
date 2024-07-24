#include<iostream>
using namespace std;

int update(int n){
    n++;
}

int main(){

    // int i=5;

    // //creat reference variable
    // int &j=i;
    // cout<<i<<endl;
    // i++;
    // cout<<i<<endl;
    // j++;
    // cout<<i<<endl;
    // cout<<j<<endl;

    int n=5;
    cout<<n<<endl;
    update(n);
    cout<<n<<endl;

    return 0;
}
