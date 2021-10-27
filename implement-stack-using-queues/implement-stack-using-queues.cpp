class MyStack {      
      queue<int> q1;
      queue<int> q2;
      int size;

public:
    MyStack(){
     size=0;
    }

    void push(int x) {
        q1.push(x);
        size++;
    }
    
    int pop() {
        if(q1.empty())
            return -1;
        while(q1.size() > 1){
            q2.push(q1.front());
            q1.pop();
        }
        int x = q1.front();
        size--;
        q1.pop();
        swap(q1,q2);
        return x;
    }
    
    int top() {
        if(q1.empty())
            return -1;
        while(q1.size() > 1){
            q2.push(q1.front());
            q1.pop();
        }
        int x = q1.front();
        q1.pop();
        q2.push(x);
        swap(q1,q2);
        return x;
    }
    
    bool empty() {
        if(q2.empty() && q1.empty())
            return true;
        else
            return false;
        
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */