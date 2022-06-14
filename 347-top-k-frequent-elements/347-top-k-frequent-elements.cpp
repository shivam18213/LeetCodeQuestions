class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        unordered_map<int,int> m;
        for(int i: nums){
            if(m.find(i) == m.end()){
                m.insert({i,0});
            }
            else{
                m[i]++;
            }
        }
        
        
        // sort map 
        vector<pair<int,int>> freq;
        for (auto &it : m){
            freq.push_back(it);
        }
        
        sort(freq.begin(), freq.end(),[&](pair<int,int> a, pair<int, int> b){
           return a.second > b.second; 
        });
        
        for(int i=0; i < k; i++){
            res.push_back(freq[i].first);
        }
        return res;
    }
};