class Solution {
public:
    string getSmallestString(int n, int k) {
    vector<int> a(n,0);
    k=k-n;
    for(int i=n-1; i>=0 && k !=0 ; i--){
        int current = a[i];
        if(k != 0){
            while(k != 0 && a[i] < 25){
                a[i]++;
                k--;
            }
        }
    }
    string ret = "";
    for(int i=0; i < a.size(); i++){
        ret += char(a[i]+'a');
    }
    return ret;

}
};