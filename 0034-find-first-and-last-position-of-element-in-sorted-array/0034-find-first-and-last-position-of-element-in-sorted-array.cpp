class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int left=0,right=n-1;

        vector<int> res(2,-1);

        while(left<=right)
        {
            if(nums[left]==target) 
            {
                res[0]=left;
                break;
            }
            left++;
        }

        while(left<=right)
        {
            if(nums[right]==target) 
            {
                res[1]=right;
                break;
            }
            right--;
        }
        return res;
    }
};