#include<iostream>
#include<vector>

using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();

        int rowindex=0;
        int colindex=col-1;

        while(rowindex< row && colindex>=0){
            int element=matrix[rowindex][colindex];
            if(element==target){
                return 1;
            }
            else if(element<target){
                rowindex++;
            }
            else{ //element>target
                colindex--;
            }
        }
        return 0;
    }
    
int main(){
    vector<vector<int>> arr={{1,4,7},{2,5,8},{3,6,9}};
    cout<<searchMatrix(arr,3);
}