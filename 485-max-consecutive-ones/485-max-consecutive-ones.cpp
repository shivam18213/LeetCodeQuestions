class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=0;
        int s=0;
        int e=0;
        for(e=0; e < nums.size() && s < nums.size(); e++){
            if(nums[e] == 1) maxi = max(e-s+1, maxi);
            else{
                s = e+1;
            }
        }
        return maxi;
    }
};