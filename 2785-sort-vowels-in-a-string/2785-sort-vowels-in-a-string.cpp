class Solution {
public:
    string sortVowels(string s) {
        vector<char> vowels;
        unordered_set<char> vowelSet = {'a','e','i','o','u','A','E','I','O','U'};
        for (char c : s) {
            if (vowelSet.count(c)) {
                vowels.push_back(c);
            }
        }
        sort(vowels.begin(), vowels.end());
        int idx = 0;
        for (char& c : s) {
            if (vowelSet.count(c)) {
                c = vowels[idx++];
            }
        }

        return s;
    }
};
