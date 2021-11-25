class Solution {
public:
   string rankTeams(vector<string>& votes) {
       int n = votes.size();
       int k = votes[0].size();
       string res = votes[0];
       
       vector<vector<int>> rank(k, vector<int> (26,0));
       for(int i = 0; i < n ; i++){
           for(int j = 0; j < votes[i].size(); j++){
               rank[j][votes[i][j] - 'A']++;
           }
       }
       sort(res.begin(),res.end(),[&](char a, char b){
           for(int i= 0; i< k ;i++){
               if((rank[i][a - 'A']) ==(rank[i][b - 'A']))
                   continue;
               else return rank[i][a - 'A'] > rank[i][b - 'A'];
           }
           return a < b;
           
       });
       return res;
   }
};