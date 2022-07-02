class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int median;
        sort(nums.begin(), nums.end());
        if(nums.size() % 2 != 0){
            median = nums[0+(nums.size()-1)/2];
        }
        if(nums.size() % 2 == 0){
            median = (nums[nums.size()/2-1] + nums[nums.size()/2])/2;
        }
        cout<<median;
        int count = 0;
        for(int i=0; i < nums.size(); i++){
            count += abs(nums[i] - median);
        }
        return count;
    }
};