class Solution {
public:
    int search(vector<int>& nums, int target) {
        int high = nums.size()-1;
        int flag =0;
        int mid;
        int low = 0;
        if(nums.size() ==1 ){
            if(nums[0] == target){
                return 0;
            }
            else 
                return -1;
        }
        else if(nums.size() ==2){
            if(nums[0] == target )
                return 0;
            else if(nums[1] == target)
                return 1;
            else
                return -1;
        }
        
        while(low  <= high){
            mid = low + (high-low)/2;
            if(nums[low] <= nums[mid]){ // left half is sorted
                if(nums[mid] == target){
                    return mid;
                }
                else if(nums[low] <= target && target <= nums[mid]){
                    high = mid-1;
                }
                else
                    low = mid+1;
            }
            else if(nums[mid] <=nums[high]){
                if(nums[mid] == target)
                    return mid;
                else if(nums[mid] <= target && target <= nums[high]){
                    low= mid+1;
                    }
                else
                    high = mid-1;
            }
       
        }
         return -1;
        }
};