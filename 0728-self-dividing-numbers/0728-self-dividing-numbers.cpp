class Solution {
public:
    bool isSelfDividing(int num) {
        int original = num;
        while (num > 0) {
            int digit = num % 10;
            if (digit == 0 || original % digit != 0)
                return false;
            num /= 10;
        }
        return true;
    }

    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        for (int i = left; i <= right; ++i) {
            if (isSelfDividing(i))
                result.push_back(i);
        }
        return result;
    }
};
