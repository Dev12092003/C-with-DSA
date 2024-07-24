#include<iostream>
using namespace std;

// in heap if we use that than we do manully memory release

int main(){
    int row;
    cin>>row;
    int col;
    cin>>col;

    int** arr=new int*[row];
    for(int i=0;i<row;i++){
        arr[i]=new int[col];
    }

    // taking input
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        } cout<<endl;
    }

    // relese memory col
    for(int i=0;i<row;i++){
        delete[] arr[i];
    }

    delete [] arr; // relese first what we create


    return 0;
}