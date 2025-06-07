class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int maxi = *max_element(nums.begin(), nums.end());
        int mini = *min_element(nums.begin() , nums.end());
        int range = maxi-mini+1;

        vector<int> count(range , 0);
        vector<int> temp(nums.size());
        
        for(int i=0 ; i<nums.size() ; i++)
        {
            count[nums[i]-mini]++;
        }

        for(int i=1 ; i<range ;i++)
        {
            count[i]=count[i] + count[i-1];
        }

        for(int i=nums.size()-1 ; i>=0 ; i--)
        {
            temp[--count[nums[i] - mini ]] = nums[i];
        }

        for(int i=0 ; i<nums.size() ; i++)
        {
            nums[i] = temp[i];
        }
        return nums;
    }
};