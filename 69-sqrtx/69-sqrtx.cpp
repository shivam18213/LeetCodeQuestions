class Solution {
public:
    int mySqrt(int x) {
        long long int ans = 0;
        while(ans*ans <= x){
            ans++;
        }
        return --ans;
        
        
    }
};