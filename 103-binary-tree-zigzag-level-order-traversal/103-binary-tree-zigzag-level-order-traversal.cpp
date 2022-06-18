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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        vector<int> buffer;
        if(root == nullptr) 
           return res;
        if ((root->left == nullptr && root->right == nullptr)){
            buffer.push_back(root->val);
            res.push_back(buffer);
            return res;
        }
            
        
        stack<TreeNode*> stk1, stk2;
        int level=0;
        stk1.push(root);
        buffer.clear();
        while(!stk1.empty()){
            TreeNode* n = stk1.top();
            stk1.pop();
            if(n != nullptr){
                buffer.push_back(n->val);
                if(level % 2 == 0){
                    if(n->left != nullptr)
                    stk2.push(n->left);
                    if(n->right != nullptr)
                    stk2.push(n->right);
                }
                else{
                    if(n->right != nullptr)
                    stk2.push(n->right);
                    if(n->left != nullptr)
                    stk2.push(n->left);
                }
            }

            if(stk1.empty()){
                swap(stk1,stk2);
                res.push_back(buffer);
                buffer.clear();
                level++;
            }
        }
        return res;
        
        
        
    }
};