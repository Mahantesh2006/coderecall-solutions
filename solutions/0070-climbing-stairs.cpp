// ////////////////////////////////////////////////////////////
// LeetCode #70: Climbing Stairs
// Difficulty : EASY
// Pattern    : Math
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/climbing-stairs/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n;

        int prev1 = 1; // ways to reach step 1
        int prev2 = 2; // ways to reach step 2

        for (int i = 3; i <= n; i++) {
            int curr = prev1 + prev2;
            prev1 = prev2;
            prev2 = curr;
        }
        return prev2;
    }
};