class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> freq;
        int maxLength = 0 ,start =0;

        for(int end = 0 ; end<s.length() ; end++)
        {
            char c = s[end];
            if(freq.count(c) && freq[c] >= start) start=freq[c] + 1;

            freq[c]=end;
            maxLength = max(maxLength , end - start + 1);
        }
        return maxLength;
    }
};