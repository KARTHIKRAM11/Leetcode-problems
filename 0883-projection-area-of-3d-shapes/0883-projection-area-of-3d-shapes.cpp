class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int top = 0, front = 0, side = 0;
        int n = grid.size();
        int m = grid[0].size();

        for (int i = 0; i < n; ++i) {
            int rowMax = 0;
            for (int j = 0; j < m; ++j) {
                if (grid[i][j] > 0) top++;
                rowMax = max(rowMax, grid[i][j]);
            }
            front += rowMax;
        }

        for (int j = 0; j < m; ++j) {
            int colMax = 0;
            for (int i = 0; i < n; ++i) {
                colMax = max(colMax, grid[i][j]);
            }
            side += colMax;
        }

        return top + front + side;
    }
};