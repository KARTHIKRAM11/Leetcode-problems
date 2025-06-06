class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n , vector<int> (n));
        int top=0,left=0;
        int bottom=n-1,right=n-1;
        int m=1;

        while(left<=right && top<=bottom)
        {
            for(int i=left ; i<=right ; i++)
            {
                matrix[top][i] =  m;
                m++;
            }
            top++;

            for(int i=top ; i<=bottom ; i++)
            {
                matrix[i][right]=m;
                m++;
            }
            right--;
            if(top<=bottom){
                for(int i=right ; i>=left ; i--)
                {
                    matrix[bottom][i]=m;
                    m++;
                }
                bottom--;
            }

            if(left<=right){
                for(int i=bottom ; i>=top ; i--)
                {
                    matrix[i][left]=m;
                    m++;
                }
                left++;
            }
        }
        return matrix;
    }
};