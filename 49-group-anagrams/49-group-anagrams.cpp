class Solution {
public:
    string sort_check(string s1){
        sort(s1.begin(), s1.end(),[](char a, char b){
            return a < b;
        });
        return s1;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> m;
        for(int i=0; i< strs.size(); i++){
            string ss = sort_check(strs[i]);
            m[ss].push_back(strs[i]);
        }
        vector<vector<string>> res;
        for(auto itr = m.begin(); itr != m.end(); itr++){
            res.push_back(itr->second);
        }
        
                          return res;
                          
        
        
    }
};