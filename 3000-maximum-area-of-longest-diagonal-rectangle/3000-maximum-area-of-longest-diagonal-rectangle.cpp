class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        double maxDiagonal = 0.0;
        int maxArea = 0;         
        for (auto& dim : dimensions) {
            int length = dim[0];
            int width = dim[1];
            double diagonal = sqrt(length * length + width * width);
            int area = length * width;                              
            if (diagonal > maxDiagonal) 
            {
                maxDiagonal = diagonal;
                maxArea = area;
            } else if (diagonal == maxDiagonal) 
            {
                maxArea = max(maxArea, area);
            }
        }
        return maxArea;
    }
};
