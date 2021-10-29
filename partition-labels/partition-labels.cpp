class Solution {
public:
    vector<int> partitionLabels(string s) {
        map<char,int> m;
        for(int i=0; i < s.size();i++){
            if(m.find(s[i]) == m.end())
                m.insert({s[i],i});
            else{
                m.find(s[i])->second = i;
            }
        }
        vector<int> res;
        int start=-1;
        int maxin=0; //  for max index required to reach
        int maxval=0; 
        for(int i=0; i< s.size();i++){
            maxin = max(m.find(s[i])->second,maxin);
            // one string completed
            if(i == maxin){
                // i-start will be lenght;
                res.push_back(i-start);
                start = i;
            }
        }
        return res;
        
    }
};