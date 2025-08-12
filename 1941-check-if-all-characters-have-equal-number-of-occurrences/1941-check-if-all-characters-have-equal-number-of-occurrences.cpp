class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> map;
        for(char c : s)
        {
            map[c]++;
        }
        int count = map.begin()->second;
        for(const auto& [ch , occur] : map)
        {
            if(occur != count) return false;
        }
        return true;
    }
};