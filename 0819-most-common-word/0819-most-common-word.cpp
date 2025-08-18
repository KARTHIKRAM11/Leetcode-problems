class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_set<string> bannedSet(banned.begin(), banned.end());
        unordered_map<string, int> freq;
        string word, result;
        int maxCount = 0;
        for (char& c : paragraph) 
        {
            c = isalpha(c) ? tolower(c) : ' ';
        }
        stringstream ss(paragraph);
        while (ss >> word) 
        {
            if (bannedSet.count(word)) continue;
            int count = ++freq[word];
            if (count > maxCount) {
                maxCount = count;
                result = word;
            }
        }
        return result;
    }
};
