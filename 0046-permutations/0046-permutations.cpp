class Solution {
public:
    void permutations(vector<int> &container , vector<int>& nums , vector<vector<int>> &res , vector<bool> &flag){
        if(container.size() == nums.size())
        {
            res.push_back(container);
            return;
        }

        for(int i=0 ; i<nums.size() ; i++)
        {
            if(!flag[i])
            {
                container.push_back(nums[i]);
                flag[i]=true;
                permutations(container , nums , res , flag);
                flag[i]=false;
                container.pop_back();
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> container;
        vector<bool> flag(nums.size(), false);
        permutations(container , nums , res , flag);
        return res;
    }
};