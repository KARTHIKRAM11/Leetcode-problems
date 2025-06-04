class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int flag=0;

        for(int j=0 ; j<n ; j++)
        {
            if(nums[j]==target)
                return j;

            else if(nums[j] !=target && nums[j]<target)
                flag+=1;
        }

        return flag;
    }
};
