class Solution {
public:
    int nextno(int n){
        int sum1= 0;
        int d=0;
        while(n > 0){
            d= n % 10;
            sum1 = sum1+ (d * d);
            n = n / 10;
        }
        return sum1;
    }
    bool isHappy(int n) {
        int s= n;
        int f= nextno(n);
        while(s !=1){
            if(f == s){
                return false;
            }
            f=nextno(nextno(f));
            s=nextno(s);
        }
        return true;
    }
};