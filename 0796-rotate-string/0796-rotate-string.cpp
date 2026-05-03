class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.length();
        
        if(s.length()!=goal.length()) return false;
        return (s + s).find(goal) != string::npos;
    }
};