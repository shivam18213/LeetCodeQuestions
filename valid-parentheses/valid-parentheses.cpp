class Solution {
    
    
  bool calc(string str){
  long long  int i=0;
  int f=0;
  long long  int len = str.length();
    stack <int> stk;
    
    while(i < len){
        if(str[i] == '{' || str[i] == '(' || str[i] == '[')
        stk.push(str[i]);
        else{
            if(!stk.empty()){
                if(str[i] == ')' && stk.top()=='(')
                stk.pop();
                else if(str[i] == '}' && stk.top()=='{')
                stk.pop();
                else if(str[i] == ']' && stk.top()=='[')
                stk.pop();
                else {
                    f=1; 
                    break;
                }
        }
        else 
            return false;
        }
         i++;
    }
    if(f==1 || !stk.empty())
    return false;
    else 
    return true;
}
    
    
    
    
public:
    bool isValid(string s) {
      return  calc(s);
    }
};