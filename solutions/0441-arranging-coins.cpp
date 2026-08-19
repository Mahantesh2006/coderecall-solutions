// ////////////////////////////////////////////////////////////
// LeetCode #441: Arranging Coins
// Difficulty : EASY
// Pattern    : Math
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/arranging-coins/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    int arrangeCoins(int n) {
        int row = 0;
        while (n >= row + 1) {
            row++;
            n -= row;
        }
        return row;
    }
};