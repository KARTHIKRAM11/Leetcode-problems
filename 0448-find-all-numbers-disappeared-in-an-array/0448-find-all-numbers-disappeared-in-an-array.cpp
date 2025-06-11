class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> st(nums.begin() , nums.end());
        vector<int> res;
        for(int i=1 ; i<=nums.size() ; i++)
        {
            if(st.find(i) == st.end()) res.push_back(i);
        }
        return res;
    }
};