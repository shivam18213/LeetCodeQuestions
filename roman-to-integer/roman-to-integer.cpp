class Solution {
public:
    int romanToInt(string s) {
    map<char, int> m = { { 'I' , 1 },
                                { 'V' , 5 },
                                { 'X' , 10 },
                                { 'L' , 50 },
                                { 'C' , 100 },
                                { 'D' , 500 },

                            { 'M' , 1000 } };
    
    if(s.size()==1)
        return m.find(s[0])->second;
    int num = m.find(s[s.size()-1])->second;
    for(int i=s.size()-2; i >= 0 ;i--){
        if(m.find(s[i])->second >= m.find(s[i+1])->second)
            num = num + m.find(s[i])->second;
        else
            num = num - m.find(s[i])->second;
    }
    return num;
}
};