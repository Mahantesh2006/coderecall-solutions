// ////////////////////////////////////////////////////////////
// LeetCode #409: Longest Palindrome
// Difficulty : EASY
// Pattern    : Hash Table
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/longest-palindrome/
// Synced via : CodeRecall (https://coderecall.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mp;

        for (char c : s) {
            mp[c]++;
        }

        int length = 0;
        bool hasOdd = false;

        for (auto &p : mp) {
            if (p.second % 2 == 0) {
                length += p.second;
            } else {
                length += p.second - 1;
                hasOdd = true;
            }
        }

        return hasOdd ? length + 1 : length;
    }
};