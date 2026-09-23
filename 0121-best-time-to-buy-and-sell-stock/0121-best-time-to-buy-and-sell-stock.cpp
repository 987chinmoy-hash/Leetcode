class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int a = prices[0];
        int profit = 0;
        int cost;
        for(int i =1;i<n;i++){
            cost = prices[i] - a;
            profit = max(profit,cost);
            a=min(a,prices[i]);
        }
        return profit;
    }
};