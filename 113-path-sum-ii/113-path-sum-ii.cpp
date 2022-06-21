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
    
    void func(TreeNode* root, int tar, vector<int> &path, vector<vector<int>> &ans){
        if(root == nullptr) return ;
        path.push_back(root->val);
        
        if(root->val == tar && root->left == nullptr && root->right == nullptr){
            ans.push_back(path);
        }
        func(root->left, tar - root->val, path, ans);
        func(root->right, tar - root->val, path, ans);
        path.pop_back();
        
    }
    
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> path;
        func(root, targetSum, path, ans);
        return ans;
    }
};