class Solution {
public:
vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        auto res = grid;
        int n=grid.size(), m=grid[0].size();
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int pos=(i*m+j+k)%(m*n);
                res[pos/m][pos%m]=grid[i][j];
            }
        }
        return res;
    }
};