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
    vector<int> v;
    int i=0;
    void inorder(TreeNode* root){
        if(root == nullptr){
            return;
        }
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
    void inordercopy(TreeNode* root){
        if(i == 0){
            sort(v.begin(), v.end());
        }
        if(root == nullptr){
            return;
        }
        inordercopy(root->left);
        root->val = v[i++];
        inordercopy(root->right);
    }
    void recoverTree(TreeNode* root) {
        TreeNode* temp = root;
        inorder(temp);
        inordercopy(root);
    }
};