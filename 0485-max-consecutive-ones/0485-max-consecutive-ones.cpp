class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int current = 0;
        int maxc = 0;
        for(int num : nums ){
            if(num==1){
                current+=1;
                maxc=max(current,maxc);
            }
            else current=0;
        }
        return maxc;
    }
};