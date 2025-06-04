class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=0 ,j=0;
        int n = nums.size();

        for(int i=0 ; i<n ; i++){
            if(nums[i]==val) count++;

            if(nums[i]!=val)
            {
                nums[j]=nums[i];
                j++;
            }
        }

        int k = n-count;

        return k;
    }
};