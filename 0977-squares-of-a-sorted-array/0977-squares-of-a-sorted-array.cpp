class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left=0 , n=nums.size(), right=n-1 ,pos=n-1;
        vector<int> result(n);
        while(left<=right)
        {
            int lSq = nums[left]*nums[left];
            int rSq = nums[right]*nums[right];
            if(lSq > rSq)
            {
                result[pos]=lSq;
                left++;
            }
            else
            {
                result[pos]=rSq;
                right--;
            }
            pos--;
        }
        return result;
    }
};