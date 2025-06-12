class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> res(26,0);

        for(char c : s)
        {
            res[c-'a']++;
        }

        for(char c : t)
        {
            res[c-'a']--;
        }

        for(int i:res)
        {
            if(i!=0) return false;
        }

        return true;
    }
};