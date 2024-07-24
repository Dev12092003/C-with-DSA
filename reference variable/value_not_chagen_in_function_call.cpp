#include<iostream>
using namespace std;

int update(int n){
    n++;
}

int main(){

    int n=5;
    cout<<n<<endl;
    update(n);
    cout<<n<<endl;

    return 0;
}
