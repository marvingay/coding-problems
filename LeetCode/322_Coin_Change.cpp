class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int ans[amount+1];
        ans[0] = 0;
        
        for (int i=1; i <= amount; i++) {
            ans[i] = 1000000000;
            for (auto c : coins) {
                if (i - c >= 0) {
                    ans[i] = min(ans[i], ans[i-c] + 1);
                }
            }
        }
        
        return ans[amount] != 1000000000 ? ans[amount] : -1;
    }
};