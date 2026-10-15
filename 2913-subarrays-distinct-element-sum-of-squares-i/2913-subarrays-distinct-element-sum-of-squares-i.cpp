class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int ans = 0, n = nums.size();

        for (int i = 0; i < n; i++) {
            unordered_set<int> st;

            for (int j = i; j < n; j++) {
                st.insert(nums[j]);        
                int count = st.size();       
                ans += count * count;       
            }
        }
        return ans;
    }
};