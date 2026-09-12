class Solution {
public:
    struct State {
        long long weight = 0;
        array<int, 4> idx = {-1, -1, -1, -1};
        int len = 0;
    };

    bool better(const State& a, const State& b) {
        if (a.weight != b.weight)
            return a.weight > b.weight;

        for (int i = 0; i < min(a.len, b.len); i++) {
            if (a.idx[i] != b.idx[i])
                return a.idx[i] < b.idx[i];
        }

        return a.len < b.len;
    }

    State add(State s, int x, long long w) {
        s.weight += w;

        int pos = s.len;

        while (pos > 0 && s.idx[pos - 1] > x) {
            s.idx[pos] = s.idx[pos - 1];
            pos--;
        }

        s.idx[pos] = x;
        s.len++;

        return s;
    }

    vector<int> maximumWeight(vector<vector<int>>& intervals) {
        int n = intervals.size();

        vector<array<int, 4>> a(n);

        for (int i = 0; i < n; i++) {
            a[i] = {
                intervals[i][0],
                intervals[i][1],
                intervals[i][2],
                i
            };
        }

        sort(a.begin(), a.end());

        vector<int> starts(n);
        for (int i = 0; i < n; i++)
            starts[i] = a[i][0];

        vector<int> nxt(n);

        for (int i = 0; i < n; i++) {
            nxt[i] = upper_bound(
                starts.begin(),
                starts.end(),
                a[i][1]
            ) - starts.begin();
        }

        vector<array<State, 5>> dp(n + 1);

        for (int i = n - 1; i >= 0; i--) {
            for (int k = 1; k <= 4; k++) {
                State skip = dp[i + 1][k];
                State take = add(dp[nxt[i]][k - 1], a[i][3], a[i][2]);

                dp[i][k] = better(take, skip) ? take : skip;
            }
        }

        vector<int> ans;

        for (int i = 0; i < dp[0][4].len; i++)
            ans.push_back(dp[0][4].idx[i]);

        return ans;
    }
};