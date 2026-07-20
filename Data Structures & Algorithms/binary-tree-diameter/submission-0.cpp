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
    int diameterOfBinaryTree(TreeNode* root) {
        
        int res = 0;
        dfs(root, res);
        
        return res;
    }

    int dfs(TreeNode* root, int &res){

        if(root == NULL){
             return -1;
        }

        int left = 1 + dfs(root->left, res);
        int right = 1 + dfs(root->right, res);

        int both = left + right;
        
        res = max(res, max(both, max(right, left)));

        return max(left, right);
    }
};
