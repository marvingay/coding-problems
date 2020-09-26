class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int stock = 1e9;
        
        for (int i=0; i < prices.size(); i++) {
            if (prices[i] < stock) stock = prices[i];
            else ans = max(ans, prices[i] - stock);
        }
        
        return ans;
    }
};
