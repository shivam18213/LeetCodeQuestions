class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ret(n,vector<int> (n,0));
        int i=1;
        int j;
        int left =0;
        int right = ret[0].size()-1;
        int top=0;
        int bottom = ret.size()-1;
        while(top <=bottom && left <=right){
            for(j=left; j<=right;j++){
                ret[top][j]=i;
                i++;
            }
            for(j=top+1;j<=bottom;j++ ){
                ret[j][right]=i;
                i++;
            }
            if(top != bottom){
                for(j=right-1;j>=left;j--){
                    ret[bottom][j]=i;
                    i++;
                }
            }
            if(left != right){
                for(j= bottom-1; j>top;j--){
                    ret[j][left]=i;
                    i++;
                }
            }
            left++;right--;top++;bottom--;
        }
       return ret; 
    }
};