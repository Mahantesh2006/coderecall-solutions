// ////////////////////////////////////////////////////////////
// LeetCode #7: Reverse Integer
// Difficulty : MEDIUM
// Pattern    : Math
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/reverse-integer/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    int reverse(int x) {
        int rev = 0;

        while (x != 0) {
            int ld = x % 10;
            x /= 10;

            // Check for overflow
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && ld > 7))
                return 0;

            // Check for underflow
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && ld < -8))
                return 0;

            rev = rev * 10 + ld;
        }

        return rev;
    }
};