class Solution {
public:
    string reversePrefix(string word, char ch) {
        int occur = word.find(ch);
        if(occur == -1) return word;

        stack<char> st;

        for(int i = 0 ; i<=occur ; i++)
        {
            st.push(word[i]);
        }

        string res;

        while(!st.empty())
        {
            res+=st.top();
            st.pop();
        }

        for(int i = occur+1 ; i<word.size() ; i++)
        {
            res+=word[i];
        }

        return res;
    }
};