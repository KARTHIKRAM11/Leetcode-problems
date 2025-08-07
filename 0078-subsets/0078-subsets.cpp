class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        int total = 1<<(nums.size());
        for(int i = 0 ; i < total ; i++)
        {
            vector<int> answer={};
            for(int j = 0 ;  j < nums.size() ; j++)
            {
                if(i&(1<<j)) answer.push_back(nums[j]);
            }
            result.push_back(answer);
        }
        return result;
    }
};