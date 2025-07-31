class Solution {
public:
    string makeFancyString(string s) {
        int n = s.size();
        string result;
       for(int i=0 ; i<n ; i++)
        {
            int m = result.size();
            if(m<2 || !(result[m-1]==s[i] && result[m-2]==s[i])) result+=s[i];
        }
        return result;
    }
};