class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int currentSum =nums[0], totalSum = nums[0];
        
        for(int i=1; i<nums.size(); i++) {
            
            //Current max sum is either the current element OR current element + Previous Maximum subarray)
            currentSum = max(nums[i], currentSum+nums[i]); 
            
            //If the current maximum array sum is greater than the global total. Update it
            totalSum = max(totalSum, currentSum);
    }
        return totalSum;
    }
};