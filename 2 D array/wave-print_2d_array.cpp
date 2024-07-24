
//time big O(n)
//space big O(n) // n is length of array
#include<iostream>
#include<vector>
using namespace std;

// this print row wise wave 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    //Write your code here
    vector<int> ans;

    for(int col=0;col<mCols;col++){

        if(col%2==0){
            //even inedx -> top to bottom
            for(int row=0;row<nRows;row++){
                cout<<arr[row][col]<<" ";
                //ans.push_back(arr[row][col]);
            }
        }
        else{ // odd index -> bottom to top
            for(int row=nRows-1;row>=0;row--){
                cout<<arr[row][col]<<" "; // [row] [col]-> col wise // [col][row]->row wise 
                //ans.push_back(arr[row][col]); 
            }
        }
        cout<<endl;
    }
}
int main(){
    vector<vector<int>> arr={{1,2,3},{4,5,6},{7,8,9}};
    wavePrint(arr,3,3);

}