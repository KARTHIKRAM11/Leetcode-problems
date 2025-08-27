class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> value = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };
        int n = s.size();
        int result = value[s[n - 1]]; 
        for (int i = n - 2; i >= 0; i--) {
            if (value[s[i]] < value[s[i + 1]]) {
                result -= value[s[i]];
            } else {
                result += value[s[i]];
            }
        }
        return result;
    }
};
