class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double window = 0;

        for(int i=0 ; i<k ; i++)
        {
            window += nums[i];
        }

        double maxsum= window;

        for(int i=k ; i<nums.size() ; i++)
        {
            window += nums[i] - nums[i-k];
            maxsum = max(maxsum , window);
        }

        return (maxsum/k);
    }
};