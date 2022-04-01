class Solution {
public:
    int idx=0;
    void reverseString(vector<char>& s) {
        if(idx >= s.size()/2){
            for(int i=0; i < s.size(); i++){
                cout<<s[i];
            }
            return;
        }
        swap(s[idx],s[s.size()-idx-1]);
        idx++;
        reverseString(s);
        
    }
};