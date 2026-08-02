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
    bool isValidBST(TreeNode* root) {
        
       return dfs(root->right, 1, root->val, INT_MAX) && dfs(root->left, -1, INT_MIN, root->val);
    }

    bool dfs(TreeNode* root, int side, int lb, int ub){

        if(root == NULL){
            return true;
        }

        cout<<"ROOT: "<<root->val<<endl;
        cout<<"LB RB "<<lb<<" "<<ub<<endl;

        if(side == 1){

            if(root->val > lb && root->val < ub){
                return dfs(root->right, 1, root->val, ub) && dfs(root->left, -1, lb, root->val);
            } else {
                return false;
            }
        } else if(side == -1){

            if(root->val < ub && root->val > lb){
                return dfs(root->left, -1, lb, root->val) && dfs(root->right, 1, root->val, ub);
            } else {
                return false;
            }
        }

        return true;
    }
};
