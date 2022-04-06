class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        vector<int> res;
        for(int i=0; i < nums.size(); i++){
            if(m.empty() || m.find(target - nums[i]) == m.end()){
                m.insert({nums[i],i});
            }
            else{
                res.push_back(m[target-nums[i]]);
                res.push_back(i);
                return res;
            }
        }
        return res;
    }
};