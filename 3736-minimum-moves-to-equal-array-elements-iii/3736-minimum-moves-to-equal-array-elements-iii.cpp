class Solution {
public:
    int minMoves(vector<int>& nums) {
        int top = ranges::max(nums), moves = 0;
        for (int x : nums) moves += top - x;
        return moves;
    }
};