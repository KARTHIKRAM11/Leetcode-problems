class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();

        for (int& x : nums) {
            x = x * x;
        }

        sort(nums.begin(), nums.end());

        long long ans = 0;
        int m = n / 2;

        for (int i = 0; i < m; i++) {
            ans -= nums[i];
        }

        for (int i = m; i < n; i++) {
            ans += nums[i];
        }

        return ans;
    }
};