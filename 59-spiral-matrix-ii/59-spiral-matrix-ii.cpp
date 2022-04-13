class Solution {
public:
    vector<vector<int>> generateMatrix(int n1) {
        
         vector<vector<int>> matrix( n1 , vector<int> (n1, 0));
        
        int current = 1;
        int m = matrix.size(), n = matrix[0].size();
        
        int left, right, top, bottom;
        
        left = 0, right = n - 1, top = 0, bottom = m - 1;
        while (left <= right && top <= bottom) {
            for(int i=left; i <= right; i++){
                matrix[top][i] = current++;
            
            }
            for(int i=top+1; i <= bottom; i++){
                matrix[i][right] = current++;
            
            }
            if(top != bottom)
            for(int i=right-1; i >=left; i--){
                matrix[bottom][i] = current++;
            }
            if(left != right){
                for(int i=bottom-1; i >= top+1; i--){
                    matrix[i][left] = current++;
                }
            }
            top++;
            bottom--;
            left++;
            right--;


        }
        return matrix;
    }
};