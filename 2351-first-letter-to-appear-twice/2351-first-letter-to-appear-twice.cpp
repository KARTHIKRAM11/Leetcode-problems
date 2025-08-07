class Solution {
public:
    char repeatedCharacter(string s) {
        bool seen[26] = {false};
        for(char c : s)
        {
            int index = c-'a';
            if(seen[index]) return c;
            seen[index]=true;
        }
        return '\0';
    }
};