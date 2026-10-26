
class Solution {
public:
    int countIslands(vector<vector<int>>& grid, int k) {
        int m = grid.size(), n = grid[0].size();
        int dirs[5] = {-1, 0, 1, 0, -1};
        int ans = 0;

        vector<pair<int, int>> st;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 0) continue;

                long long sum = 0;
                st.clear();
                st.push_back({i, j});

                sum += grid[i][j];
                grid[i][j] = 0;

                while (!st.empty()) {
                    auto [x, y] = st.back();
                    st.pop_back();

                    for (int d = 0; d < 4; d++) {
                        int nx = x + dirs[d];
                        int ny = y + dirs[d + 1];

                        if (nx >= 0 && nx < m &&
                            ny >= 0 && ny < n &&
                            grid[nx][ny] > 0) {

                            sum += grid[nx][ny];
                            grid[nx][ny] = 0;
                            st.push_back({nx, ny});
                        }
                    }
                }

                if (sum % k == 0) {
                    ans++;
                }
            }
        }

        return ans;
    }
};

