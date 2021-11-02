class Solution {
public:
    string intToRoman(int n) {
        vector<int> nums = {1,2,3,4,5,9,10,40,50,90,100,400,500,900,1000,2000,3000,4000};
        vector<string> sym= {"I","II","III","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M","MM","MMM","MMMM"};
        int i=0;
        string s = "";
        reverse(nums.begin(),nums.end());
        reverse(sym.begin(),sym.end());
        for(i=0; i < nums.size();i++){
            while(n >= nums[i]){
                s = s+sym[i];
                n = n- nums[i];
            }
        }
        return s;
    }
};