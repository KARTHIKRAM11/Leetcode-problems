/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int countNodes(TreeNode* root) {
        if(!root) return 0;
        queue<TreeNode*> q;
        q.push(root);
        int count = 0;

        while(!q.empty())
        {
            int n = q.size();

            for(int i=0 ; i<n ; i++)
            {
                TreeNode *node = q.front();
                q.pop();
                count++;

                if(node->left!=nullptr) q.push(node->left);
                if(node->right!=nullptr) q.push(node->right);

            }
        }
        return count;
    }
};