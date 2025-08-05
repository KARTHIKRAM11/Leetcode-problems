class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0, size = flowerbed.size();
        for(int i = 0 ; i<size ; i++)
        {
            if(flowerbed[i] == 0)
            {
                bool left = ( (i==0) || (flowerbed[i-1] == 0));
                bool right = ( (i==size-1) || (flowerbed[i+1] == 0 ));
                if(left && right)
                {
                    flowerbed[i] = 1;
                    count++;
                    if(count >= n) return true;
                }
            }
        }
        return count>=n;
    }
};