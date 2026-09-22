class Solution {
    struct Node {
        int prod = 1;
        long long cnt[5] = {};
    };

    int k;
    vector<Node> tree;

    Node mergeNodes(const Node& left, const Node& right) {
        Node res;

        res.prod = (left.prod * right.prod) % k;

        for (int r = 0; r < k; r++)
            res.cnt[r] = left.cnt[r];

        for (int r = 0; r < k; r++)
            res.cnt[(left.prod * r) % k] += right.cnt[r];

        return res;
    }

    void build(int node, int l, int r, vector<int>& nums) {
        if (l == r) {
            int val = nums[l] % k;
            tree[node].prod = val;
            tree[node].cnt[val] = 1;
            return;
        }

        int mid = l + (r - l) / 2;

        build(node * 2, l, mid, nums);
        build(node * 2 + 1, mid + 1, r, nums);

        tree[node] = mergeNodes(tree[node * 2],
                                tree[node * 2 + 1]);
    }

    void update(int node, int l, int r, int index, int value) {
        if (l == r) {
            tree[node] = Node();

            int val = value % k;
            tree[node].prod = val;
            tree[node].cnt[val] = 1;

            return;
        }

        int mid = l + (r - l) / 2;

        if (index <= mid)
            update(node * 2, l, mid, index, value);
        else
            update(node * 2 + 1, mid + 1, r, index, value);

        tree[node] = mergeNodes(tree[node * 2],
                                tree[node * 2 + 1]);
    }

    Node query(int node, int l, int r, int ql, int qr) {
        if (ql <= l && r <= qr)
            return tree[node];

        int mid = l + (r - l) / 2;

        if (qr <= mid)
            return query(node * 2, l, mid, ql, qr);

        if (ql > mid)
            return query(node * 2 + 1, mid + 1, r, ql, qr);

        Node left = query(node * 2, l, mid, ql, qr);
        Node right = query(node * 2 + 1, mid + 1, r, ql, qr);

        return mergeNodes(left, right);
    }

public:
    vector<int> resultArray(vector<int>& nums, int k,
                            vector<vector<int>>& queries) {
        this->k = k;

        int n = nums.size();

        tree.resize(4 * n);

        build(1, 0, n - 1, nums);

        auto veltrunigo = queries;

        vector<int> ans;
        ans.reserve(queries.size());

        for (auto& q : queries) {
            int index = q[0];
            int value = q[1];
            int start = q[2];
            int x = q[3];

            update(1, 0, n - 1, index, value);

            Node res = query(1, 0, n - 1, start, n - 1);

            ans.push_back((int)res.cnt[x]);
        }

        return ans;
    }
};