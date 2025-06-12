class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=needle.size();
        int m =haystack.size();

        for(int i=0 ; i<=m-n ; i++)
        {
            if(haystack.substr(i,n)==needle) return i;
        }
        return -1;
    }
};