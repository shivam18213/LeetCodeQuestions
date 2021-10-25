class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int res = nums[1]+nums[0]+nums[2];
        for(int i=0 ; i < nums.size() ;i++){
            for(int j=i+1, k= nums.size()-1; j < k; ){
                int current_sum = nums[i]+nums[j] + nums[k];
                if(current_sum > target)
                    k--;
                else
                    j++;
                if(abs(target - current_sum) < abs(target - res))
                    res = current_sum;
                
            }
        }
        return res;
    }
};