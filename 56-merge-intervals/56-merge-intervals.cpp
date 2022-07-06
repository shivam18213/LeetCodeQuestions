class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [=](vector<int> a, vector<int> b){
           return  a[0] < b[0];
        });
        vector<vector<int>> ans;
        ans.push_back(intervals[0]);
        for(int i=1; i < intervals.size(); i++){
            // merge
            if(ans[ans.size()-1][1] >= intervals[i][0]){
                ans[ans.size()-1][1] = max(intervals[i][1], ans[ans.size()-1][1]);
            }
            else{
                // do not merge, dirctly add
                ans.push_back(intervals[i]);
            }
        }
        return ans;
    }
};