class Solution {
public:
    int lengthOfLongestSubstring(string st) {
        if(st.size() == 0){
            return 0;
        }
        if(st.size() == 1){
            return 1;
        }
        set<char> s;
        int i = 0;
        int j = 0;
        int maxLen=0;
        while(j < st.size()){
            if(s.empty()){
                s.insert(st[j]);
                j++;
            }
            else if(!s.empty() && s.find(st[j]) != s.end()){
                maxLen = max(maxLen, j-i);
                s.erase(st[i]);
                i++;
            }
            else if(!s.empty() && s.find(st[j]) == s.end()){
                s.insert(st[j]);
                j++;
                
            }
            //cout<<maxLen<<"asdas\n";
            
        }
        return max(maxLen,j-i);
    }
};