class Solution {
public:
    vector<string> codes = {".",".;", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    
    void getKPC(string d, string temp, vector<string> &ans){
        if(d.size()==0){
            ans.push_back(temp);
            return;
        }
        char ch = d[0];
        string code = codes[ch-'0'];
        string ros = d.substr(1);
        for(int i=0;i<code.size();i++){
            getKPC(ros, temp+code[i], ans);
        }
        
    }
    
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0) return {};
        vector<string> ans;
        getKPC(digits, "", ans);
        return ans;
    }
};