class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> freq;
        for(const auto& c : s)
        {
            freq[c]++;
        }
        int count=0;
        bool odd=false;

        for(const auto& f : freq)
        {
            if(f.second % 2 == 0) count+=f.second;
            else{
                count+=f.second-1;
                odd=true;
            }
        }
        if(odd) count+=1;

        return count;
    }
};