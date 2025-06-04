/*class Solution {
public:
    vector<int> constructDistancedSequence(int n) {
        
    }
};
*/
class Solution {
public:
    vector<int> constructDistancedSequence(int n) {
        vector<int> ans(2 * n - 1), used(n + 1, 0);
        function<bool(int i)> dfs = [&](int i) -> bool {
            if (i == ans.size()) return true;
            if (ans[i]) return dfs(i + 1);
            for (int j = n; j >= 1; --j) {
                if (used[j] || (j != 1 && (i + j >= ans.size() || ans[i + j]))) continue;
                used[j] = 1;
                ans[i] = j;
                if (j != 1) ans[i + j] = j;
                if (dfs(i + 1)) return true;
                ans[i] = used[j] = 0;
                if (j != 1) ans[i + j] = 0;
            }
            return false;
        };
        dfs(0);
        return ans;
    }
};