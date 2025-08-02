class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int , int> count;
        int start = 0 , maxlength = 0;

        for(int end = 0 ; end<fruits.size() ; end++)
        {
            count[fruits[end]]++;
            while(count.size() > 2)
            {
                count[fruits[start]]--;
                if(count[fruits[start]] == 0) count.erase(fruits[start]); 
                start++;
            }
            maxlength = max(maxlength , end-start+1);
        }
        return maxlength;
    }
};