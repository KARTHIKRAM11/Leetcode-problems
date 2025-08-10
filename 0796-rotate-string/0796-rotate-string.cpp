class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length()) return false;
        string tot = s+s;
        return tot.find(goal) != string::npos;
    }
};