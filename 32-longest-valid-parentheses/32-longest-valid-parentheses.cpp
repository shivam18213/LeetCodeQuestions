class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> stk;
        stk.push(-1);
        int maxL=0;
        for(int i=0; i < s.size(); i++){
            if(s[i] == '('){
                stk.push(i);
            }
            if(s[i] == ')'){
                stk.pop();
                if(stk.empty()) stk.push(i);
                else{
                    maxL = max(maxL, i - stk.top());
                }
             }
        }
        return maxL;
    }
};