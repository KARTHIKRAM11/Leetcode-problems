class Solution {
public:
    static bool compareChar(const pair<char,int>& a , const pair<char,int>& b) {
        if (a.second == b.second) 
            return a.first < b.first; 
        return a.second > b.second;
    }
    string frequencySort(string s) {
        unordered_map<char , int> freq;
        for(char c : s)
        {
            freq[c]++;
        }

        vector<pair<char,int>> pairs(freq.begin() , freq.end());

        sort(pairs.begin() , pairs.end() , compareChar);

        string result;
        for(const auto& p:pairs)
        {
            result.append(p.second , p.first);
        }
        return result;
    }
};