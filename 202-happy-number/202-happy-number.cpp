class Solution {
public:
    int sum_digits(int n){
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
        int sum=0;
        set<int> s;
        s.insert(n);
        while(n != 1){
            sum = sum_digits(n);
            if(s.find(sum) != s.end()){
                return false;
            }
            n=sum;
            s.insert(sum);
        }
        return true;
    }
};