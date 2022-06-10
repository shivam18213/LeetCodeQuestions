class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 1){
            return 1;
        }
        int i=0;
        int j=0;
        int maxLen=0;
        vector<int> chars(256,0);
        while(j<s.size()){
            chars[int(s[j])]++;
            while(chars[int(s[j])] > 1){
                chars[int(s[i])]--;
                i++;
            }
            maxLen = max(maxLen, j-i+1);
            j++;
        }
        return maxLen;
    }
};