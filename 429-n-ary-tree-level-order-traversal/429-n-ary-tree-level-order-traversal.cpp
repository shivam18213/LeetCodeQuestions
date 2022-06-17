/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        if(!root)
           return ans;
        
        queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
            vector<int> v;
            int s = q.size();
            for(int i=0;i<s;i++)
            {
                Node *a = q.front();
                q.pop();
                v.push_back(a->val);
                
                vector<Node*> x = a->children;
                for(int j=0;j<x.size();j++)
                    q.push(x[j]);
            }
            ans.push_back(v);
        }
        return ans;
    }
};