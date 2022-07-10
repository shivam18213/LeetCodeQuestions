class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int m1 = -1;
        int m2 = -1;
        int c1 = 0;
        int c2 = 0;
        vector<int> res;
        for(int i=0; i < nums.size(); i++){
            if(nums[i] == m1){
                c1++;
            }
            else if(nums[i] == m2){
                c2++;
            }
            else if(c1 == 0){
                m1 = nums[i];
                c1 = 1;
            }
            else if(c2 == 0){
                m2 = nums[i];
                c2 = 1;
            }
            else{
                c1--;
                c2--; 
            }
            
        }
        c1=0;
        c2=0;
        for(int i=0; i < nums.size(); i++){
            if(nums[i] == m1) c1++;
            if(nums[i] == m2) c2++;
        }
        if(m1 == m2){
            res.push_back(m1);
            return res;
        }
        if(c1 > nums.size()/3) res.push_back(m1);
        if(c2 > nums.size()/3) res.push_back(m2);
        return res;
    }
};