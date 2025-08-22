class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int m = grid.size(), n = grid[0].size();
        vector<int> vals;
        vals.reserve(m * n);

        for (auto &row : grid)
            for (int v : row)
                vals.push_back(v);

        int mod = vals[0] % x;
        for (int v : vals)
            if (v % x != mod) return -1;

        int mid = vals.size() / 2;
        nth_element(vals.begin(), vals.begin() + mid, vals.end());
        int target = vals[mid];

        long long ops = 0;
        for (int v : vals)
            ops += abs(v - target) / x;

        return (int)ops;
    }
};