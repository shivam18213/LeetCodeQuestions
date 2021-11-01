class Solution {
public:
    int digits(int n){
        int count=0;
        while(n >= 1){
            n=n/10;
            count++;
        }
        return count;
    }
    int findNumbers(vector<int>& nums){
        int count=0;
        for(int i=0; i < nums.size(); i++){
            int n = digits(nums[i]);
            cout<<n<<" ";
            if(n % 2 == 0)
                count++;
        }
        return count;
        
    }
};