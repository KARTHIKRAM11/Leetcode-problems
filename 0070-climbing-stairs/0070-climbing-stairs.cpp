class Solution {
public:
    int climbStairs(int n) {
        if(n==1) return 1;

        int ways[n+1];
        ways[1]=1;
        ways[2]=2;

        for(int i=3 ; i<=n ; i++)
        {
            ways[i] = ways[i-1] + ways[i-2];
        }
        return ways[n];
    }
};