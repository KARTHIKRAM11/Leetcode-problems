class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        for(int i=s.size()-1 ; i>=0 ; i--)
        {
            if(s.at(i)==' ' && count>0) break;
            else if(s.at(i)!=' ') count+=1;
        }
        return count;
    }
};