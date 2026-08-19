// ////////////////////////////////////////////////////////////
// LeetCode #121: Best Time to Buy and Sell Stock
// Difficulty : EASY
// Pattern    : Array
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minpr=prices[0];
        int maxpr=0;
        for(int i=1;i<prices.size();i++){
            minpr=min(minpr,prices[i]);
            maxpr=max(maxpr,prices[i]-minpr);
        }
        return maxpr;
    }
};