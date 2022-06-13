class MinStack {
public:
    public:
        stack<int> stk;
        stack<int> minvals;
    MinStack() {
        
    }
    
    void push(int val) {
        stk.push(val);
        if(minvals.empty()){
            minvals.push(val);
        }
        else if(minvals.top() >= val){
            minvals.push(val);
        }
    }
    
    void pop() {
        if(stk.top() == minvals.top()){
            minvals.pop();
        }
        stk.pop();
    }
    
    int top() {
        return stk.top();
        
    }
    
    int getMin() {
        return minvals.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */