class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int flag =0;
        for(int i= 0; i < s.size(); i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
                flag=1;
            }
            else if(!st.empty()){
                if(s[i] == ')' && st.top() == '(')
                    st.pop();
                else if(s[i] == '}' && st.top() == '{')
                    st.pop();
                else if(s[i] == ']' && st.top() == '[')
                    st.pop();
                else return false;
            }
            else return false;
        }
        if(!st.empty() || flag == 0){
            return false;
        }
        else{
            return true;
        }
        
    }
};