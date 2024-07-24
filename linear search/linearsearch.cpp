#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){

    for(int i=0;i<size;i++){
        if(arr[i]==key){
            cout<<"present";
            return 1;
        }
    }
    return 0;

}
int main(){
    int arr[10]={1,5,2,8,3,9,4,6,7,0};
    cout<<"enter the key you search";

    int key;
    cin>>key;

    bool found=search(arr,10,key);
    if (found){
        cout<<"here is the key";
    }
    else{
        cout<<"not found";
    }

}