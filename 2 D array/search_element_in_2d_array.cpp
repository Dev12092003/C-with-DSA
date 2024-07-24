#include<iostream>

using namespace std;

bool ispresent(int arr[][4],int row,int col,int target){
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            if(arr[row][col]==target){
                return 1;
            }
        }
    }
    return 0;


}

int main(){

    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<4;j++){
    //         cin>>arr[i][j];
    //     }
    // }
    
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"enter the element to search in array:";
    int num;
    cin>>num;

    if(ispresent(arr,3,4,num)){
        cout<<"prestent";
    }
    else{
        cout<<"not preseent";
    }


}