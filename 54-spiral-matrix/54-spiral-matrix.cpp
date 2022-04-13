class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int left=0;
        int right=matrix[0].size()-1;
        int top = 0;
        int bottom=matrix.size()-1;
        vector<int> v;
        while(bottom >= top && left <= right){
            for(int i=left; i <= right; i++){
                v.push_back(matrix[top][i]);
            }
            for(int i=top+1; i <= bottom; i++){
                v.push_back(matrix[i][right]);
            }
            if(top != bottom)
            for(int i=right-1; i >=left; i--){
                v.push_back(matrix[bottom][i]);
            }
            if(left != right){
                for(int i=bottom-1; i >= top+1; i--){
                    v.push_back(matrix[i][left]);
                }
            }
            top++;
            bottom--;
            left++;
            right--;
        }
        return v;
    }
};