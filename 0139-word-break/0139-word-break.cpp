class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> fr(wordDict.begin() , wordDict.end());
        int n =s.size();
        vector<bool> dp(n+1 , false);
        dp[0] = true;

        for(int i=1 ; i<=n ; i++)
        {
            for(int j=0 ; j<i ; j++)
            {
                if(dp[j] && fr.find(s.substr(j , i-j))!= fr.end())
                {
                    dp[i]=true;
                    break;
                }
            }
        }
        return dp[n];
    }
};