#include<ioatream>

using namespace std;
// time big O(nm) 
// space big O( )  
vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> ans;

        int row=matrix.size();
        int col=matrix[0].size();

        int count=0;
        int total=row*col;
        int startrow=0;
        int startcol=0;
        int endrow=row-1;
        int endcol=col-1;
        while(count<total){
            //print starting row
            for(int index=startcol;count<total&&index<=endcol;index++){
                ans.push_back(matrix[startrow][index]);
                count++;
            }
            startrow++; 

            //print ending col
            for(int index=startrow;count<total&&index<=endrow;index++){
                ans.push_back(matrix[index][endcol]);
                count++;
            }
            endcol--;

            //print ending row
            for(int index=endcol;count<total&&index>=startcol;index--){
                ans.push_back(matrix[endrow][index]);
                count++;
            }
            endrow--;

            //print ending col
            for(int index=endrow;count<total&&index>=startrow;index--){
                ans.push_back(matrix[index][startcol]);
                count++;
            }
            startcol++;
        }
        return ans;
    }
int main(){

}