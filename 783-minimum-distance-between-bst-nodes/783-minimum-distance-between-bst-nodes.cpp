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
    void printVector(vector<int> r){
        for(int i: r){
            cout<<i<<"\n";
        }
    }
    void func(TreeNode* root, vector<int> &vals){
        if(root == nullptr) return;
        vals.push_back(root->val);
        if(root->left)
        func(root->left, vals);
        if(root->right)
        func(root->right, vals);
    }
    int minDiffInBST(TreeNode* root) {
        vector<int> vals;
        func(root, vals);
        sort(vals.begin(), vals.end());
        printVector(vals);
        if(vals.size() == 0){
            return 0;
        }
        if(vals.size() == 1){
            return vals[0];
        }
        else{
            int dif = INT_MAX;
            for(int i=0; i < vals.size()-1; i++){
                dif = min(dif,abs(vals[i]-vals[i+1]));
            }
            return dif;
        }
    }
};