#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        for (int num : nums)
            if (num != 0)
                nums[i++] = num;
        while (i < nums.size())
            nums[i++] = 0;
    }
};
