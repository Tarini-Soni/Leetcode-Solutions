class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int min_profit = prices[0];
        int max_profit = 0;

        for(int i = 1; i<n; i++){
            max_profit = max(max_profit , prices[i] - min_profit);
            min_profit = min(min_profit , prices[i]);
        }

        return max_profit;
        
    }
};