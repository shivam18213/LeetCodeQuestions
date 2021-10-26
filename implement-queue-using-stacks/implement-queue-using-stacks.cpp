class MyQueue {
        stack<int> s1; // main stack
        stack<int> s2; // to hold
public:
    void push(int x) {
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s2.push(x);
        
    }
    
    int pop() {
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        int x = s1.top();
        s1.pop();
        return x;
    }
    
    int peek() {
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        return s1.top();
        
    }
    
    bool empty() {
        if(!s1.empty())
            cout<<"as"<<s1.top();
        if(!s2.empty())
            cout<<s2.top();
        if(s1.empty() && s2.empty())
            return true;
        else 
            return false;
    }
    

    
    
};


/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */