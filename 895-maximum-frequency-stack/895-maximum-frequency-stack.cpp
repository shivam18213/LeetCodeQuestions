class FreqStack {
public:
    unordered_map<int, stack<int>> design;
    unordered_map<int, int> freq;
    FreqStack() {
        
    }
    
    void push(int val) {
        if(freq.find(val) == freq.end()){
            freq[val] = 1;
        }
        else{
            freq[val]++;
        }
        int f = freq[val];
        if(design.find(f) == design.end()){
            // make a new stack
            stack<int> stk;
            design[f] = stk;
        }
        design[f].push(val);
        
    }
    
    int pop(){
        int n = design.size();
        int ans = design[n].top();
        design[n].pop();
        if(design[n].size() == 0){
            design.erase(n);
        }
        freq[ans]--;
        if(freq[ans] == 0){
            freq.erase(ans);
        }
        return ans;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */