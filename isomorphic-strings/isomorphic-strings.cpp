class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
/*        if(s.size() != t.size())
            return false;
        map<char,long long int> m;
        string pattern= "";
        string pattern2= "";
        for(long long int i=0; i< s.size();i++){
            if(m.find(s[i]) == m.end()){
                m.insert({s[i],i});
                pattern = pattern + to_string(i)+" ";
            }
            else{
                pattern = pattern + to_string(m.find(s[i])->second)+" ";
            }
        }
        m.clear();
        for(long long int i=0; i< t.size();i++){
            if(m.find(t[i]) == m.end()){
                m.insert({t[i],i});
                pattern2 = pattern2 + to_string(i)+" ";
            }
            else{
                pattern2 = pattern2 + to_string(m.find(t[i])->second)+" ";
            }
        }
        if(pattern == pattern2)
            return true;
        else 
            return false;
   } */ 
        map<char,char> pointing;
        map<char,bool> repeating;
        for(int i=0 ; i< s.size();i++){
            if((pointing.find(s[i]) == pointing.end()) && repeating.find(t[i]) == repeating.end()){
                pointing.insert({s[i], t[i]});
                repeating.insert({t[i], true});
            }
            else{
                if(pointing.find(s[i])->second == t[i])
                    continue;
                return false;
            }
        }
        return true;
    }
};