class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char,char> mp1;
        unordered_map<char,char> mp2;

        for(int i=0;i<s.length();i++)
        {
            char x=s[i];
            char y=t[i];
            if(mp1.count(x))
            {
                if(mp1[x]!=y) return false;
            }
            else mp1[x]=y;
            if(mp2.count(y))
            {
                if(mp2[y]!=x) return false;
            }
            else mp2[y]=x;
        }
        return true;
    }
};