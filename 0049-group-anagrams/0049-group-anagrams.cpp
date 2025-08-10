class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> anagram;
        for(const auto& word : strs)
        {
            string key = word;
            sort(key.begin() ,key.end());
            anagram[key].push_back(move(word)); //** move keyword saves the memory instead of copying (important) **
        }
        vector<vector<string>> result;
        result.reserve(anagram.size()); // reserve keyword reserves the space by avoiding reallocations
        for(const auto& group : anagram)
        {
            result.push_back(move(group.second));
        }
        return result;
    }
};