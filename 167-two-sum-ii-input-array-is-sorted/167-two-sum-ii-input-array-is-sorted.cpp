class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int p1 = 0;
        int p2 = nums.size()-1;
        vector<int> res;
        while(p1 < p2){
            if(nums[p1] + nums[p2] == target){
                res.push_back(p1+1);
                res.push_back(p2+1);
                return res;
            }
            else if(nums[p1] + nums[p2] < target){
                p1++;
            }
            else{
                p2--;
            }
                
            
        }
        return res;
    }
};