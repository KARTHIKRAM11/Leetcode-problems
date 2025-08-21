class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> result;
        for(const auto& num : nums)
        {
            auto it = lower_bound(result.begin() , result.end() , num);
            if(it == result.end()) result.push_back(num);
            else *it=num;
        }
        return result.size();
    }
};