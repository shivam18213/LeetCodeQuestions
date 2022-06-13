class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        vector<int> ret;
        for(int i=0; i < nums.size(); i++){
            if(m.find(target - nums[i]) == m.end()){
                m.insert({nums[i],i});
            }
            else{
                ret.push_back(i);
                ret.push_back(m.find(target-nums[i])->second);
                return ret;
            }
        }
        return ret;
    }
};