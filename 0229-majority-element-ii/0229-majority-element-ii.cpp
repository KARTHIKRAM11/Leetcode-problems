class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1=0, count2=0;
        int element1, element2;

        for(int i=0 ; i<nums.size() ; i++) {
            if(count1 == 0 && nums[i]!=element2){
                count1=1;
                element1=nums[i];
            }
            else if(count2==0 && nums[i]!=element1) {
                count2=1;
                element2=nums[i];
            }
            else if(element1 == nums[i]) count1++;
            else if(element2 == nums[i]) count2++;
            else {
                count1--;
                count2--;
            }
        }
        vector<int> res;
        int ct1=0,ct2=0;
        for(int i=0 ; i<nums.size() ; i++) {
            if(nums[i] == element1) ct1++;
            if(nums[i] == element2) ct2++;
        }
        if(ct1 >= (int)((nums.size()/3)+1)) res.push_back(element1);
        if(ct2 >= (int)((nums.size()/3)+1)) res.push_back(element2);
        sort(res.begin(), res.end());
        return res;
    }
};