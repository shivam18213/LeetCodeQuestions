class Solution {

public:

    string convertToTitle(int columnNumber) {
        string res;
        while (columnNumber >= 1) {

            char ch = (columnNumber - 1)%26 + 'A';
            res = res+ch;
            columnNumber = (columnNumber - 1)/26;
        }
        reverse(res.begin(), res.end());
        return res;

    }

};