class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int>arr;
        int row=matrix.size();
        int col=matrix[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
            arr.push_back(matrix[i][j]);
            }
        }
        sort(arr.begin(),arr.end());
        return arr[k-1];
    }
};