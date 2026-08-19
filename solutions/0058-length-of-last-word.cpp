// ////////////////////////////////////////////////////////////
// LeetCode #58: Length of Last Word
// Difficulty : EASY
// Pattern    : String
// Time       : $O(N)$ linear time in worst case.
// Space      : $O(1)$ constant auxiliary memory space.
// URL        : https://leetcode.com/problems/length-of-last-word/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int len = 0;

        // Skip trailing spaces
        int i = n - 1;
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        // Count characters of the last word
        while (i >= 0 && s[i] != ' ') {
            len++;
            i--;
        }

        return len;
    }
};