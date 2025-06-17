class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> st(nums1.begin(), nums1.end());
        set<int> seen;
        vector<int> res;

        for(int i = 0; i < nums2.size(); i++) {
            if(st.find(nums2[i]) != st.end() && seen.find(nums2[i]) == seen.end()) {
                res.push_back(nums2[i]);
                seen.insert(nums2[i]);
            }
        }
        return res;
    }
};
