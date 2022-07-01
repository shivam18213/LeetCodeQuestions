class Solution {
public:
    string toHex(int n) {
        long num = n;
        if(num < 0){
            num += pow(2,32);
        }

        unordered_map<string, string> codes;
        codes.insert({"0","0"});
        codes.insert({"1","1"});
        codes.insert({"2","2"});
        codes.insert({"3","3"});
        codes.insert({"4","4"});
        codes.insert({"5","5"});
        codes.insert({"6","6"});
        codes.insert({"7","7"});
        codes.insert({"8","8"});
        codes.insert({"9","9"});
        codes.insert({"10","a"});
        codes.insert({"11","b"});
        codes.insert({"12","c"});
        codes.insert({"13","d"});
        codes.insert({"14","e"});
        codes.insert({"15","f"});
        
        if(num < 15){
            return codes[to_string(n)];
        }
        string ans="";
        
        while(num >= 16){
            int rem = num % 16;
            num /= 16;
            ans += codes[to_string(rem)];
        }
        if(num != 0)
        ans += codes[to_string(num)];
        reverse(ans.begin(), ans.end());
        return ans;
        
        
    }
};