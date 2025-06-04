class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        for(int i=n-1 ; i>=0 ; i--)
        {
            if(digits[i]+1<10)
            {
                digits[i]++;
                return digits;
            }
            else{
                digits[i]=0;
            }
        }
        vector<int> newdigits(n + 1, 0);
        newdigits[0]=1;

        return newdigits;
    }
};