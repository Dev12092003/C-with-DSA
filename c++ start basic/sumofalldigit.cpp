#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum;
    for(int i=0;i<=n;i++){
        int x=n%10;
        sum=sum+x;
        n=n/10;
    }
    cout<<sum;
    return 0;
} 