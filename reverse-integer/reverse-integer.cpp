class Solution {
public:
    int reverse(int x) {
        string str = to_string(x);
        int s;
        if(x > 0)
        s = str.size();
        if(x < 0)
        s = str.size()-1;
        int u;
        long long int num=0;
        while(s >=1){
            u = x%10;
            x = x/10;
            if(str.size() == s && u==0){
                s--;
                continue;
            }
            
            num= num+ u*pow(10,s-1);
            if(abs(num) >= 2147483647)
                return 0;
            s--;
        }
        return num;
    }
};