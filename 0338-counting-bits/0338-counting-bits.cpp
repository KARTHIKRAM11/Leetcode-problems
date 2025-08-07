class Solution {
public:
    int countSet(int x) {
        int count = 0;
        while(x !=1) {
            count += x&1;
            x = x>>1;
        }
        if(x==1) count+=1;
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> result(n+1 , 0);
        result[0] = 0;
        for(int i=1 ; i<=n ; i++) 
        {
            result[i] = countSet(i);
        }
        return result;
    }
};