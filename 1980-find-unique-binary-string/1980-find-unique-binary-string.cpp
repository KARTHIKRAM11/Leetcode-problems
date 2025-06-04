/*class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        
    }
};*/
class Solution {
public:
    std::string findDifferentBinaryString(std::vector<std::string>& nums) {
        int bitmask = 0;
        for (auto& str : nums) {
            int countOnes = std::count(str.begin(), str.end(), '1');
            bitmask |= 1 << countOnes;
        }
        for (int i = 0;; ++i) {
            if (((bitmask >> i) & 1) == 0) {
                return std::string(i, '1') + std::string(nums.size() - i, '0');
            }
        }
    }
};
