class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // assumed major element
        int major = nums[0];
        
        // count of assumed major element
        int count = 1;
        for(int i=1; i < nums.size(); i++){
            if(nums[i] == major)count++;
            else count --;
            
            if(count == 0){
                major = nums[i];
                count = 1;
            }
        }
        count=0;
        for(int i=0; i < nums.size(); i++){
            if(nums[i] == major) count++;
        }
        if(count > nums.size()/2) return major;
        else return -1;
    }
};