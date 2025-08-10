class Solution {
public:
    static bool compareKFreq(const pair<string,int>& a , const pair<string,int>& b) {
        if(a.second != b.second) return a.second>b.second;
        else return a.first<b.first;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> freq;
        for(const string& w : words)
        {
            freq[w]++;
        }
        vector<pair<string , int>> kfreq(freq.begin() , freq.end());

        sort(kfreq.begin() , kfreq.end() , compareKFreq);

        vector<string> result;
        for(int i=0 ; i<k ; i++)
        {
            result.push_back(kfreq[i].first);
        }
        return result;
    }
};