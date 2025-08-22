class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int target = nums[nums.size()/2];
        //int target = nums[mid];
        long long ops=0;

        for(int num : nums)
        {
             ops += abs(num-target);
        }
        return ops;
    }
};