// ////////////////////////////////////////////////////////////
// LeetCode #9: Palindrome Number
// Difficulty : EASY
// Pattern    : Math
// Time       : $O(\log_{10}(N))$ logarithmic time.
// Space      : $O(1)$ constant auxiliary space.
// URL        : https://leetcode.com/problems/palindrome-number/
// Synced via : CodeRecall (https://coderecall.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) return false;
        int revertedNumber = 0;
        while (x > revertedNumber) {
            revertedNumber = revertedNumber * 10 + x % 10;
            x /= 10;
        }
        return x == revertedNumber || x == revertedNumber / 10;
    }
};