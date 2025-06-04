#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int, int> digit_sum_map;
        int max_value = -1;

        for (int num : nums) {
            int s = sum_of_digits(num);
            if (digit_sum_map.find(s) != digit_sum_map.end()) {
                max_value = max(max_value, num + digit_sum_map[s]);
                digit_sum_map[s] = max(digit_sum_map[s], num);
            } else {
                digit_sum_map[s] = num;
            }
        }

        return max_value;
    }

private:
    int sum_of_digits(int num) {
        int sum = 0;
        while (num) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }
};
