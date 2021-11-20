class Solution {
public:
    double myPow(double x, int n) {
        long long nn = n;
        int f=0;
        if(nn < 0){
            f=1;
            nn = -1 * nn;
        }
        double ans = 1.0;
        while(nn != 0){
            if(nn % 2 !=0){
                ans = ans * x;
                nn = nn-1;
            }
            else{
                x = x*x;
                nn = nn/2;
            }
            
        }
        if(f==1)
            ans = (double)(1.0)/double(ans);
        return ans;
    }
};