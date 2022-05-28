class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xorVal1 = nums[0];
        
        for(int i=1; i < nums.size(); i++){
            xorVal1 ^= nums[i];
            
        }
        
        for(int i=0; i <= nums.size() ; i++){
            xorVal1 ^= i;
        }
        return xorVal1;
    }
};