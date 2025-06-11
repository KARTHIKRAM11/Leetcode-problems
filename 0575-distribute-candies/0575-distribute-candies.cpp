
/*class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int> st;
        for(int i=0 ; i<candyType.size() ; i++)
        {
            st.insert(candyType[i]);
        }

        int m = (candyType.size()/2);

        if(st.size()>m) return m;

        else return st.size();
    }
};
*/

class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        return min(unordered_set<int>(candyType.begin(), candyType.end()).size(), candyType.size() / 2);
    }
};

