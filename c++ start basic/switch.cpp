#include<iostream>
using namespace std;
int  main() {
    int n;
    int num=1;
    cin>>n;
    switch(n){
        case 1:
        cout<<"first";
        break;
        case 2:switch(num){
            case 1:
            cout<<"in c 2 in 1";
            break;
        }
        cout<<"seccond";
        break;
        default :
        cout<<"default";
    }

}
