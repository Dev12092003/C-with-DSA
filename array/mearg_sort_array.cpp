
// merge two sorted array 

#include<iostream>
#include<vector>


using namespace std;

void merge(int arr1[],int n,int arr2[],int m,int arr3[]){


    int k=0;
    int i=0;
    int j=0;

    while(i<n && j<m){

            if(arr1[i]<arr2[j]){
                arr3[k]=arr1[i];
                k++;
                i++;
            }
            else{
                arr3[k]=arr2[j];
                k++;
                j++;
            }
    }

    // we use this because if the size of arr1 is grater than arr2
    while(i<n){
        arr3[k]=arr1[i];
        k++;
        i++;
    }

    //we use this becase if the size of arr2 is grate than arr1 
    while(j<m){
        arr3[k]=arr2[j];
        k++;
        j++;
    }
}

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr1[5]={1,3,5,7,9};
    int arr2[4]={2,4,6,8};
    int arr3[8]={0};

    merge(arr1,5,arr2,4,arr3);
    print(arr3,8);



}