class Solution {
public:
bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        if(pushed.size()==1){
            if(pushed[0] == popped[0])
                return true;
            else
                return false;
        }
        int i=0;
        int j=0;
      
    while( i < pushed.size()){
        st.push(pushed[i++]);
        while(!st.empty() && j < popped.size() && st.top() == popped[j]){
    
                st.pop();
                j++;
            
        }
    }
    if(st.empty())
        return true;
    else
        return false;
        
}
};