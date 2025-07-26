class Solution {
public:
    string reverseVowels(string s) {
        string vowels = "aeiouAEIOU";
        stack<char> st;

        for(char ch : s)
        {
            if(vowels.find(ch) != string::npos)
            {
                st.push(ch);
            }
        }

        for(char &ch : s)
        {
            if(vowels.find(ch) != string::npos)
            {
                ch=st.top();
                st.pop();
            }
        }
        return s;
    }
};