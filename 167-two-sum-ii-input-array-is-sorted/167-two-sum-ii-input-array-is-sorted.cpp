class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int s=0;
        int e=numbers.size()-1;
        vector<int> v;
        while(s < e){
            int sum = numbers[e]+numbers[s];
            if(sum == target){
                v.push_back(s+1);
                v.push_back(e+1);
                return v;
            }
            else if(sum > target){
                e--;
            }
            else s++;
        }
        return v;
        
    }
};