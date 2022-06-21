class Solution {
public:
    int mySqrt(int x) {
        
        int s = 0;
        int e = INT_MAX;
        long long ans = 0;
        while(s <= e){
            long long d = s + (e-s)/2;
            if(d*d <= x){
                ans = d;
                s = d+1;
            }
            else{
                e = d-1;
            }
            
        }
        return ans;
        
    }
};