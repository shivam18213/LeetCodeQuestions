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
class BSTIterator {
public:
    TreeNode* MainRoot;
    stack<TreeNode*> stk;
    BSTIterator(TreeNode* root){
        while(root != nullptr){
            stk.push(root);
            root = root->left;
        }
    }
    
    int next() {
        TreeNode* res;
        if(!stk.empty()){
            res = stk.top();
            stk.pop();
        }
        TreeNode* curr = res->right;
        while(curr != nullptr){
            stk.push(curr);
            curr = curr->left;
        }
        return res->val;
        
        
    }
    
    bool hasNext() {
        if(stk.empty()){
            return false;
        }
        else
            return true;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */