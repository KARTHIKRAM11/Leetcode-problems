class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1,high=*max_element(piles.begin(),piles.end());
        while(low<=high)
        {
            int mid=(low+high)/2;
            long long hrs=0;
            for(int pile:piles)
            {
                hrs+=ceil((double)pile/mid);
            }
            if(hrs<=h) high=mid-1;
            else low=mid+1;
        }
        return low;
    }
};