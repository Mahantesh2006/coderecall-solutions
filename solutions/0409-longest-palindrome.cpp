// ////////////////////////////////////////////////////////////
// LeetCode #409: Longest Palindrome
// Difficulty : EASY
// Pattern    : Hash Table
// Time       : $O(N) - The algorithm performs a single pass over the string s of length N to populate the hash map, taking O(N) time. Subsequently, it iterates over the unique characters in the hash map (at most 52 English letters), which takes O(1) time since the alphabet size is bounded by a constant. Thus, the total time complexity is O(N).
// Space      : $O(1) - The space is consumed by the unordered_map mp, which stores at most 52 distinct English characters (uppercase and lowercase). Since the maximum number of entries is bounded by a constant alphabet size of 52, the auxiliary space complexity is O(1).
// URL        : https://leetcode.com/problems/longest-palindrome/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
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