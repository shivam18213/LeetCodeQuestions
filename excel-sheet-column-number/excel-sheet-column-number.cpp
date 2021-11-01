class Solution {
public:

    int titleToNumber(string columnTitle) {
        long long int pow = 1;
        int res = 0;
        for (int i = columnTitle.size()-1; i >= 0; i--) {
            res += (columnTitle[i] - 'A' + 1)*pow;
            pow *= 26;

        }
        return res;

    }

};
