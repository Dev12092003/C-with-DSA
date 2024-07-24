#include<iostream>
#include<vector>
#include<algorithm>  //for reverse function use

using namespace std;
void rotate(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row=matrix.size();
        int col=matrix[0].size();

        for(int i=0;i<row;i++){
            for(int j=i+1;j<col;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<row;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }

int main(){
    vector<vector<int>> arr={{1,2,3},{4,5,6},{7,8,9}};
    rotate(arr);

    
}