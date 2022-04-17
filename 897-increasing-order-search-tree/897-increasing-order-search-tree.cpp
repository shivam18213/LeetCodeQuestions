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
    void BST(TreeNode *root, vector<int> &v){
        if(root == nullptr){
            return;
        }
        BST(root->left,v);
        v.push_back(root->val);
        BST(root->right,v);
    }
    TreeNode* creatTree(vector<int> v, int idx){
        if(idx >= v.size()){
            return nullptr;
        }
        // creating new node
        TreeNode* root = new TreeNode(v[idx]);
        root->left = nullptr;
        root->right = creatTree(v,idx+1);
        return root;
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> res;
        BST(root,res);
        TreeNode* t =  creatTree(res,0);
        return t;
        
        
    }
};