class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> v(26,0);
        for(int i=0;i<s.size() ;i++)
            v[s[i] - 'a']++;
        
        for(int i=0;i<t.size() ;i++){
            if(v[t[i] - 'a'] <= 0)
                return false;
            v[t[i] - 'a']--;
        }
        for(int i=0; i<v.size() ;i++){
            if(v[i] != 0)
                return false;
        }
        return true;
        
    }
};