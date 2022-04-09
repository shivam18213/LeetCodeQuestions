class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int i=0; i < nums.size(); i++){
            if(m.empty() || m.find(nums[i]) == m.end()){
                m.insert({nums[i],1});
            }
            else{
                m[nums[i]]++;
            }
        }
        
        vector<vector<int>> v(nums.size()+1);
        for(auto i = m.begin(); i != m.end(); i++){
            v[i->second].push_back(i->first);
        }
        vector<int> res;
        int i=v.size();
        for(int i= v.size()-1; i >=0 && res.size() < k; i--){
            for(int n : v[i]){
                res.push_back(n);
                if(v.size() == k){
                    break;
                }
            }
            
        }
        return res;
        
        
    }
};