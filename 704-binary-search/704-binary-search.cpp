class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size()==1 && target == nums[0])
            return 0;
        if(nums.size()==1 && target != nums[0])
            return -1;
        int h = nums.size()-1;
        int l = 0;
        while(h >= l){
            int mid = l+(h-l)/2;
            
            if(target == nums[mid])
                return mid;
            else if(target >nums[mid])
                l= mid+1;
            else if(target < nums[mid])
                h = mid-1;
            }
        return -1;
        
    
}};