class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        vector<int> ret;
        for(int i=0 ; i< nums.size();i++){
            int rem = target - nums[i];
            if(m.find(rem) != m.end()){
                ret.push_back(i);
                ret.push_back(m.find(rem)->second);
                return ret;
            }
            else
                m.insert({nums[i],i});
        }
        return ret;
    }
};