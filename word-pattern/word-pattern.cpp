class Solution {
public:
    bool wordPattern(string pattern, string s) {
        if(pattern.size() > s.size())
            return false;
        stringstream ss(s);
        string word;
        int i=0;
        map<char,string> m;
        vector<string> buff;
        while(ss >> word){
            // word not present
            if((m.find(pattern[i]) == m.end()) && (find(buff.begin(),buff.end(),word) == buff.end())){
                buff.push_back(word);
                m.insert({pattern[i],word});
                i++;
            }
            // word found in map
            else{
                if(m.find(pattern[i]) != m.end()){
                    if(m.find(pattern[i])->second == word)
                        i++;
                    else return false;
                }
                else 
                    return false;
            }
        }
        cout<<i;
        if(i == pattern.size())
        return true;
        else 
            return false;
    }
};