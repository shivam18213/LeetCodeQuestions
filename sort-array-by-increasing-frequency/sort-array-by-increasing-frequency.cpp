class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int i=0; i< nums.size();i++){
            if(freq.find(nums[i]) != freq.end())
                freq[nums[i]]++;
            else
                freq.insert({nums[i],1});
        }
        sort(nums.begin(),nums.end(),[=](int a, int b){
            if(freq.find(a)->second == freq.find(b)->second)
                return a > b;
            return freq.find(a)->second < freq.find(b)->second;
        });
        return nums;
    }
};