class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int cols = mat[0].size()-1;
        int rows = mat.size()-1;
        int countOne=0;
        vector<pair<int,int>> ones;
        vector<int> ret;
        int flag=0;
        for(int i=0; i < mat.size(); i++){
            countOne =0;
            for(int j =0; j < mat[i].size(); j++){
                if(mat[i][j] == 1){
                    countOne++;
                }
                if(mat[i][j] == 0){
                    flag =1;
                }
            }
            ones.push_back(make_pair(i,countOne));
            cout<<i<<" "<<countOne<<"\n";
            
        }
        if(flag == 0){
            ret.push_back(0);
            return ret;
        }
        // sort map
        sort(ones.begin(), ones.end(), [=](pair<int,int> a, pair<int,int> b){
            if(a.second != b.second){
                return a.second < b.second;
            }
            else{
                return a.first < b.first;
            }
            
        });
        vector<pair<int, int>>::iterator it;
        
        for(it= ones.begin() ; it != ones.end(), k > 0; it++){
            ret.push_back(it->first);
            k--;
        }
        return ret;
    }
};