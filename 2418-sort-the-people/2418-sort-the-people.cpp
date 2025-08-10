class Solution {
public:
    static bool compareHeights(const pair<int,string>& a , const pair<int,string>& b) {
        return a.first>b.first;
    }
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>> peopleMerge;
        for(int i=0 ; i<names.size() ; i++)
        {
            peopleMerge.push_back({heights[i] , names[i]});
        }
        sort(peopleMerge.begin() , peopleMerge.end() , compareHeights);

        vector<string> result;
        for(const auto& p:peopleMerge)
        {
            result.push_back(p.second);
        }
        return result;
    }
};