class Solution {
public:
    bool func(vector<int> nums, int sum){
        int t[nums.size()+1][sum+1];
        for(int i=0; i <= nums.size(); i++){
            for(int j=0; j <= sum ; j++){
                if(i == 0 && j ==0){
                    t[i][j]=true;
                }
                else if(i == 0 && j != 0){
                    t[i][j] =false;
                }
                else if(j == 0 && i != 0){
                    t[i][j] =true;
                }
                else if(nums[i-1] > j){
                    t[i][j] = t[i-1][j];
                }
                else{
                    t[i][j] = t[i-1][j-nums[i-1]] || t[i-1][j];
                }
            }
        }
        return t[nums.size()][sum];
        
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0; i< nums.size();i++){
            sum += nums[i];
        }
        if(sum % 2 != 0)
            return false;
        else{
            return func(nums,sum/2);
        }
    }
};