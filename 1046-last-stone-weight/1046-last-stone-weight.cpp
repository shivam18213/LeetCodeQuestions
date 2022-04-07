class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if(stones.size() == 1){
            return stones[0];
        }
        int p = stones.size()-1;
        
        while(stones.size() >= 2){
            sort(stones.begin(), stones.end());
            if(stones[p] == stones[p-1]){
                stones.pop_back();
                stones.pop_back();
                p--;
                p--;
            }
            else{
                stones[p-1] = stones[p] - stones[p-1];
                stones.pop_back();
                p--;
            }
            
            
        }
        if(stones.size() == 0){
            return 0;
        }
        else{
            return stones[0];
        }
        
    }
};