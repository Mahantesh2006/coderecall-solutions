// ////////////////////////////////////////////////////////////
// LeetCode #190: Reverse Bits
// Difficulty : EASY
// Pattern    : Divide and Conquer
// Time       : $O(1) - The loop executes a constant number of iterations (exactly 32 times), which is independent of the input value magnitude, resulting in constant time complexity.
// Space      : $O(1) - Only a few primitive 32-bit unsigned integer variables (`ans`, `i`) are allocated on the stack, requiring constant auxiliary memory.
// URL        : https://leetcode.com/problems/reverse-bits/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans = 0;

        for (int i = 0; i < 32; i++) {
            ans = (ans << 1) | (n & 1);
            n >>= 1;
        }

        return ans;
    }
};