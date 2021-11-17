class Solution {
public:
    string largestNumber(vector<int>& nums) {
        string res="";
        sort(nums.begin(),nums.end(),[=](int a, int b){
            return (to_string(a)+to_string(b)) > (to_string(b)+to_string(a));
        });
        int i=0;
        if(nums[0] == 0)
            return "0";
        while(i < nums.size()){
            res = res+to_string(nums[i]);
            i++;
        }
        return res;
        }
    
};