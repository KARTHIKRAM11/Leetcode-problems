class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int minimum=prices[0] , profit=0;
        int cost;
        for(int i=1 ; i<n ; i++)
        {
            cost=prices[i]-minimum;
            profit=max(profit,cost);
            minimum=min(prices[i] , minimum);
        }

        return profit;
    }
};
