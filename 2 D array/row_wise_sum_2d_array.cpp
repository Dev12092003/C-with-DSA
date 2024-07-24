#include<iostream>

using namespace std;

int findlargesum(int arr[][3],int row,int col){
    int maxi=0;
    int rowindex=-1;
    for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0;col<3;col++){
            sum+=arr[row][col];
        }
        if(sum>maxi){
            maxi=sum;
            rowindex=row;
        }
    }
    cout<<"largest row sum is"<<maxi<<endl;
    cout<<"largest row number is"<<rowindex<<endl;


}

int printsum(int arr[][3],int row,int col){
    
    //row wie sum 
    for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0;col<3;col++){
            sum+=arr[row][col];
        }
        
        cout<<sum<<" "<<endl;
    }
}
int printcolsum(int arr[][3],int row,int col){
    //colum wise sum
    for(int col=0;col<3;col++){
        int sum=0;
        for(int row=0;row<3;row++){
            sum+=arr[row][col];
        }
        cout<<sum<<" "<<endl;
    }
}

int main(){
    int arr[3][3];
    

    cout<<"enter array element"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"sum row wise:";
    printsum(arr,3,3);
    cout<<endl;
    findlargesum(arr,3,3);
    cout<<endl;
    cout<<"sum col wise:";
    printcolsum(arr,3,3);
}