class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        if(nums.size() == 1)
            return nums[0];
        int p1=0;
        int p2=1;
        
        while (p2 < nums.size()){
            if(nums[p1] == nums[p2])
                p2++;
            else{
                p1++;
                swap(nums[p1], nums[p2]);
                p2++;
            }
        }
        return p1+1;
        
    }
};