class Solution {
public:
    bool binarySearch(vector<int> nums, int target){
        if(nums.size()==1 && target == nums[0])
            return true;
        if(nums.size()==1 && target != nums[0])
            return false;
        int h = nums.size()-1;
        int l = 0;
        while(h >= l){
            int mid = l+(h-l)/2;
            
            if(target == nums[mid])
                return true;
            else if(target >nums[mid])
                l= mid+1;
            else if(target < nums[mid])
                h = mid-1;
            }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int p1,p2;
        for(int i=0; i < matrix.size(); i++){
            p1 = 0;
            p2 = matrix[i].size()-1;
            if(matrix[i][p1] <= target && matrix[i][p2] >= target){
                bool a = binarySearch(matrix[i], target);
                if(a == true){
                    return true;
                }
            }
        }
        return false;
    }
};