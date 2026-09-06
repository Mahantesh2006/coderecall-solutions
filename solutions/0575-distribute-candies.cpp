// ////////////////////////////////////////////////////////////
// LeetCode #575: Distribute Candies
// Difficulty : EASY
// Pattern    : Array
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/distribute-candies/
// Synced via : CodeRecall (https://coderecall.vercel.app)
// ////////////////////////////////////////////////////////////

// Striver's Optimal Reference Solution: Distribute Candies
// Pattern: Array | Time: O(N) | Space: O(1)
class Solution {
public:
    int distributeCandies(vector<int>& nums) {
        int optimalResult = 0;
        int currentStreak = 0;

        for (int val : nums) {
            // Apply algorithmic state transition
            currentStreak = max(val, currentStreak + val);
            optimalResult = max(optimalResult, currentStreak);
        }
        return optimalResult;
    }
};