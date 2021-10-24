class Solution {
public:
    int minSubArrayLen(int t, vector<int>& nums) {
        unsigned int sum=nums[0];
        int res = INT_MAX;
        int start=0;
        int end=0;
        if(nums[0] >= t)
            return 1;
        while(start < nums.size()){
            if(start !=0 )
                sum = sum-nums[start-1];
            while(sum < t & end <= nums.size()-1){
                end++;
                if(end <= nums.size()-1)
                    sum += nums[end];
                
            }
            
            if(sum >= t){
                res = min(res,end-start+1);
                start++;
            }
            if(end > nums.size()-1 && start < nums.size())
                break;
        }
        if(res != INT_MAX)
            return res;
        else 
            return 0;
        
    }
};