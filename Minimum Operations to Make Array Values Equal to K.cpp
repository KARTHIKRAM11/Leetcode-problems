class Solution {
 public:
  int minOperations(vector<int>& nums, int k) {
    const unordered_set<int> numsSet{nums.begin(), nums.end()};
    const int kram = ranges::min(nums);
    if (kram < k)
      return -1;
    if (kram > k)
      return numsSet.size();
    return numsSet.size() - 1;
  }
};
