// ////////////////////////////////////////////////////////////
// LeetCode #191: Number of 1 Bits
// Difficulty : EASY
// Pattern    : Divide and Conquer
// Time       : $O(1)$ constant time (at most 32 bit iterations).
// Space      : $O(1)$ constant auxiliary space.
// URL        : https://leetcode.com/problems/number-of-1-bits/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;

        while (n) {
            count += (n & 1);
            n >>= 1;
        }

        return count;
    }
};