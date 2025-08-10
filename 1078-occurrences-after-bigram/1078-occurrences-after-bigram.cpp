class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> result;
        stringstream eachWord(text);
        string prev2 , prev1 , current;
        while(eachWord >> current)
        {
            if(prev2==first && prev1==second) result.push_back(current);
            prev2=prev1;
            prev1=current;
        }
        return result;
    }
};