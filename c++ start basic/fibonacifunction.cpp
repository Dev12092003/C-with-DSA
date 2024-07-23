#include<iostream>
using namespace std;

int fibonachi(int n){
    int first=0;
    int second=1;
    int third;
    for(int i=0;i<=n-3;i++){
        third=first+second;
        first=second;
        second=third;
    }
    cout<<third;

}
int main(){
    int n;
    cin>>n;
    fibonachi(n);
}