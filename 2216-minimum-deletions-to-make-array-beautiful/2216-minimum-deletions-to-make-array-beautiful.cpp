class Solution {
public:
    int minDeletion(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        if(nums.size() == 1){
            return 1;
        }
        if(nums.size() == 2 && nums[0] == nums[1]){
            return 2;
        }
        int count=0;
        for(int i=0; i< nums.size()-1; i++){
            if((i-count) % 2 == 0 && nums[i] == nums[i+1]){
                count++;
            }
        }
        if((nums.size() - count ) % 2 ==0)
            return count;
        else{
            return count+1;
        }
        
    }
};