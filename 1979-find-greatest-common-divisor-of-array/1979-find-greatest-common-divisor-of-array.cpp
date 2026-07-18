class Solution {
public:

    int ggg(int a , int b) {
        while(b!=0) {
            int temp = b;
            b = a%b;
            a = temp;
        }
        return a;
    }

    int findGCD(vector<int>& nums) {
        int mx = INT_MIN;
        int mn = INT_MAX;

        for(int i=0 ; i<nums.size() ; i++) {
            if(nums[i] < mn) mn = nums[i];
            if(nums[i] > mx) mx = nums[i];
        }

        return ggg(mn , mx);
    }
};