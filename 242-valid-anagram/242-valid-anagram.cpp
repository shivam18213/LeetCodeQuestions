class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        map<char,int> sm;
        map<char,int> tm;
        for(int i=0; i<s.size(); i++){
            if(sm.find(s[i]) == sm.end()){
                sm[s[i]] = 1;
            }
            else{
                sm[s[i]]++;
            }
        }
        
        for(int i=0; i<t.size(); i++){
            if(tm.find(t[i]) == tm.end()){
                tm[t[i]] = 1;
            }
            else{
                tm[t[i]]++;
            }
        }
        map<char,int> :: iterator it1;
        map<char,int> :: iterator it2;
        int sums=0;
        it1 = sm.begin();
        it2 = tm.begin();
        
        while(it1 != sm.end() && it2 != tm.end()){

            
            if((it1->first != it2->first ) || ((it1->second) != (it2->second)))
                return false;
            it1++;
            it2++;
        }
        return true;
        
        
     }
};