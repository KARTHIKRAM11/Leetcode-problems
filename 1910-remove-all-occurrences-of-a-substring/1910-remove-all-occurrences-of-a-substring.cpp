class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n = s.length();
        int p = part.length();
        string t(n ,' ');
        int j=0;

        for(int i=0 ; i<n ; i++)
        {
            t[j++] = s[i];
            if(j>=p && t.substr(j-p , p) == part) j-=p;
        }
        return t.substr(0,j);
    }
};