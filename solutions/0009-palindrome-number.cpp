// ////////////////////////////////////////////////////////////
// LeetCode #9: Palindrome Number
// Difficulty : EASY
// Pattern    : Math
// Time       : $O(\log_{10}(N))$ logarithmic time.
// Space      : $O(1)$ constant auxiliary space.
// URL        : https://leetcode.com/problems/palindrome-number/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        long long n = (long long)x;
        long long res = 0;
        long long temp = n;

        while (temp > 0) {
            res = res * 10 + (temp % 10);
            temp /= 10;
        }

        if (res > INT_MAX) return false;

        return res == n;
    }
};