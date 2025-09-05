class Solution {
public:
    int makeTheIntegerZero(long long num1, long long num2) {
        if (num1 == 0) return 0;
        for (long long k = 1; k <= 60; k++)
        {
            long long target = num1 - k * num2;
            if (target < 0) continue;
            if (__builtin_popcountll(target) <= k && k <= target) return (int)k;
        }
        return -1;
    }
};
