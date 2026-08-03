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
    vector<int> rightSideView(TreeNode* root) {
        
        if(root == NULL){
            return {};
        }

        queue<pair<TreeNode*, int>> q;
        vector<int> result;
        result.push_back(root->val);

        if(root->right){
            q.push({root->right, 1});
        } 
        
        if(root->left){
            q.push({root->left, 1});
        }

        while(!q.empty()){

            TreeNode* frontTree = q.front().first;
            int frontLevel = q.front().second;

            q.pop();

            if(frontLevel == result.size()){
                result.push_back(frontTree->val);
            }

            if(frontTree->right){
                q.push({frontTree->right, frontLevel + 1});
            }

            if(frontTree->left){
                q.push({frontTree->left, frontLevel + 1});
            }
        }

        return result;
    }
};
