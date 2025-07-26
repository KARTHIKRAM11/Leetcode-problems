class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result = "";
        int m = word1.length();
        int n = word2.length();
        int i,j=0;

        while(i<m && j<n)
        {
            result+=word1[i++];
            result+=word2[j++];
        }

        while(i<m) result+=word1[i++];
        while(j<n) result+=word2[j++];

        return result;
    }
};  