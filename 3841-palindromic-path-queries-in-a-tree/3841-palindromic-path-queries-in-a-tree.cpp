class Solution {
    int n, LOG;
    vector<int> bitTree;

    void upd(int i, int v) {               
        for (; i <= n + 1; i += i & -i) bitTree[i] ^= v;
    }
    int qry(int i) {                       
        int r = 0;
        for (; i > 0; i -= i & -i) r ^= bitTree[i];
        return r;
    }

public:
    vector<bool> palindromePath(int n_, vector<vector<int>>& edges, string s, vector<string>& queries) {
        n = n_;
        LOG = 1;
        while ((1 << LOG) < n) LOG++;

        vector<vector<int>> adj(n);
        for (auto& e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        vector<int> tin(n), tout(n), depth(n, 0), base(n, 0);
        vector<vector<int>> up(LOG + 1, vector<int>(n, 0));

        // iterative DFS
        int timer = 0;
        vector<int> stk, idx(n, 0);
        stk.push_back(0);
        up[0][0] = 0;
        tin[0] = ++timer;
        base[0] = 1 << (s[0] - 'a');
        while (!stk.empty()) {
            int u = stk.back();
            if (idx[u] < (int)adj[u].size()) {
                int v = adj[u][idx[u]++];
                if (v == up[0][u] && u != 0) continue;
                if (u == 0 && v == 0) continue;
                up[0][v] = u;
                depth[v] = depth[u] + 1;
                base[v] = base[u] ^ (1 << (s[v] - 'a'));
                tin[v] = ++timer;
                stk.push_back(v);
            } else {
                tout[u] = timer;
                stk.pop_back();
            }
        }
        for (int j = 1; j <= LOG; j++)
            for (int v = 0; v < n; v++)
                up[j][v] = up[j - 1][up[j - 1][v]];

        auto lca = [&](int a, int b) {
            if (depth[a] < depth[b]) swap(a, b);
            int d = depth[a] - depth[b];
            for (int j = 0; j <= LOG; j++)
                if (d >> j & 1) a = up[j][a];
            if (a == b) return a;
            for (int j = LOG; j >= 0; j--)
                if (up[j][a] != up[j][b]) {
                    a = up[j][a];
                    b = up[j][b];
                }
            return up[0][a];
        };

        bitTree.assign(n + 3, 0);
        auto point = [&](int u) { return base[u] ^ qry(tin[u]); };

        vector<bool> ans;
        for (auto& q : queries) {
            stringstream ss(q);
            string type;
            ss >> type;
            if (type == "update") {
                int x;
                char c;
                ss >> x >> c;
                if (s[x] == c) continue;
                int delta = (1 << (s[x] - 'a')) ^ (1 << (c - 'a'));
                s[x] = c;
                upd(tin[x], delta);
                upd(tout[x] + 1, delta);
            } else {
                int u, v;
                ss >> u >> v;
                int l = lca(u, v);
                int mask = point(u) ^ point(v) ^ (1 << (s[l] - 'a'));
                ans.push_back((mask & (mask - 1)) == 0);
            }
        }
        return ans;
    }
};