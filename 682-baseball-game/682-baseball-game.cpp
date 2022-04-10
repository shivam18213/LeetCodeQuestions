class Solution {
public:
    void plus(stack<int> &stk){
        int s1 = stk.top();
        stk.pop();
        int s2 = stk.top();
        stk.push(s1);
        stk.push(s1+s2);
    }
    
    void D(stack<int> &stk){
        stk.push(stk.top() *2);
    }
    void C(stack<int> &stk){
        stk.pop();
    }
    
    int calPoints(vector<string>& ops) {
        stack<int> stk;
        for(int i=0; i < ops.size(); i++){

            if(ops[i] == "+"){
                plus(stk);
            }
            else if(ops[i] == "D"){
                D(stk);
            }
            else if(ops[i] == "C"){
                C(stk);
            }
            else{
                stk.push(stoi(ops[i]));
            }
        }
        int sums = 0;
        while(!stk.empty()){
            sums += stk.top();
            stk.pop();
        }
        return sums;
    }
};