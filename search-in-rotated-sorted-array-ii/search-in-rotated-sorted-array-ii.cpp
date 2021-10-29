class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int high = nums.size()-1;
        int flag =0;
        
        int low = 0;
        int mid=low+(high-low)/2;
        if(nums.size() ==1 ){
            if(nums[0] == target){
                return true;
            }
            else 
                return false;
        }
        else if(nums.size() ==2){
            if(nums[0] == target )
                return true;
            else if(nums[1] == target)
                return true;
            else
                return false;
        }
        else if(nums[mid] == nums[high] && target !=nums[mid]){
            for(int i=0; i <nums.size() ;i++){
                if(nums[i] == target)
                    return true;
            }
            return false;
       }
        while(low  <= high){
            mid = low + (high-low)/2;
            if(nums[mid] == target){
                    return true;
                }
            else if(nums[low] <= nums[mid]){ // left half is sorted

                if(nums[low] <= target && target <= nums[mid]){
                    high = mid-1;
                }
                else
                    low = mid+1;
            }
            else if(nums[mid] <= nums[high]){
                if(nums[mid] <= target && target <= nums[high]){
                    low= mid+1;
                    }
                else
                    high = mid-1;
            }
        }   
         return false;
        }
};