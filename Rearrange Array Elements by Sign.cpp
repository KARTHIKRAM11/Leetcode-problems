class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n= nums.size();
        vector<int> a;
        vector<int> b;
        for(int i=0 ; i<n ; i++)
        {
            if(nums[i]<0)
            {
                a.emplace_back(nums[i]);
            }
            else
            {
                b.emplace_back(nums[i]);
            }
        }
        int k=0,l=0;
        for(int j=0 ; j<n ; j++)
        {
            if(j%2!=0)
            {
                nums[j]=a[k];
                k++;
            }
            else
            {
                nums[j]=b[l];
                l++;
            }
        }
        return nums;
    }
};
