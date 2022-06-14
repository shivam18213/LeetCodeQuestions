class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0;
        int r=1;
        int profit=0;
        
        while(r < prices.size()){
            profit = max(prices[r]-prices[l],profit);
            if((prices[r] - prices[l]) > 0){
                r++;
            }
            else{
                l=r;
                r++;
            }
        }
        return profit;
    }
};