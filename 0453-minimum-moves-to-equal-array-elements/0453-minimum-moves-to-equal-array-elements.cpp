class Solution {
public:
    int minMoves(vector<int>& nums) {
        long long sum = 0;
        int mini = INT_MAX;
        for (int num : nums)
        {
            sum += num;
            mini = min(mini, num);
        }
        return (int)(sum - (long long)nums.size() * mini);
    }
};
