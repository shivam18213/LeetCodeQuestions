class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0;
        int maxcount=0;
        int n = nums.size();
        for(int i=0; i < nums.size() ;i++){
            if(i !=0){
                if(nums[i-1] == nums[i])
                    count++;
                else{
                    if(count > n/2)
                        return nums[i-1];
                    count=1;
                }
            }
            else
                count++;
        }
        return nums[nums.size()-1];
    }
};