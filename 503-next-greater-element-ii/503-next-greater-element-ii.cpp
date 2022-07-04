class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();        
        vector<int> ans(n,-1);
        stack<int> stk;

        for (int i=0; i<n*2; i++){
            while(!stk.empty() && nums[i%n]>nums[stk.top()]){
                int t=stk.top();
                ans[t]=nums[i%n];
                stk.pop();
            }
            if (i<n) stk.push(i%n);
        }
        return ans;
    }
};