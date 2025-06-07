class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        set<char> s;
        for(int i=0 ; i<jewels.size() ; i++)
        {
            s.insert(jewels.at(i));
        }

        int count=0;

        for(int i=0 ; i<stones.size() ; i++)
        {
            if(s.contains(stones.at(i))) count++;
        }

        return count;
    }
};