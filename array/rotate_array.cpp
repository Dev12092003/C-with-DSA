#include<iostream>
#include<vector>


using namespace std;
 void rotate(vector<int> nums,int k){

    vector<int> temp(nums.size());

    for(int i=0;i<nums.size();i++){
        temp[(i+k)%nums.size()]=nums[i];
    }     

    //copy temp into num vector
    nums=temp;

    for(int i:nums){
        cout<<i<<" ";
    }
}

int main(){
    int arr[6]={1,3,5,4,6,2};
    rotate(arr,3);
}