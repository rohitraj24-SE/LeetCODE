class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int rows=row-1,cols=0;
        while(rows>=0 && cols<col){
            if(matrix[rows][cols]==target)
            return true;
            else if(matrix[rows][cols]>target)
            rows--;
            else
            cols++;
        }
    return false;
    }
};