#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int> res;
        for(int  i =0 ; i<nums.size() ; i++)
        {
            int complement = target-nums[i];
            if(res.count(complement)) {
                return {res[complement] , i};
            }
            res[nums[i]]=i;
        }
        return {};
    }
};
