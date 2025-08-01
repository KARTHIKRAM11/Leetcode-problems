class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int column=matrix[0].size();

        for(int i=0 ; i<row-1 ; i++)
        {
            for(int j=0 ; j<column-1 ; j++)
            {
                if(matrix[i][j]!=matrix[i+1][j+1]) return false;
            }
        }
        return true;
    }
};