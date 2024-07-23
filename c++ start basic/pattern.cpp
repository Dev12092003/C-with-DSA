#include<iostream>
using namespace std;
int main(){

    //reactangle
    /*for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"*";
        }
        cout<<endl;
    }*/


    //empty rectangle 
    /*int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==1||j==1||i==n||j==m){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }*/



    //triangle
    /*int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }  */  



    //reverce trianlge
    /*int n;
    cin>>n;
    for(int i=n;i>=1;--i){
        for(int j=1;j<=i;++j){
            cout<<"*";
        }
        cout<<endl;
    }*/

    
    //full trianglr
    /*int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i);j++){
            cout<<" ";
        }
        for(int j=1;j<=(2*i-1);j++){
            cout<<"*";
        }
        cout<<endl;
    }*/


    //numeric triangle
    /*int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<j;
        }
        for(int j=1;j<=(i-1);j++){
            cout<<j;
        }
        cout<<endl;
    }*/


    //odd even triangle
    /*int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if((i+j)%2==0){
                cout<<"1";
            }
            else{
                cout<<"2";
            }
        }
        cout<<endl;
    }*/

    //full triangle with numeric
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i);j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=(i-1);j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }

    return 0;
}
