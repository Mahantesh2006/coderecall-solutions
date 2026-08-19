// ////////////////////////////////////////////////////////////
// LeetCode #520: Detect Capital
// Difficulty : EASY
// Pattern    : String
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/detect-capital/
// Synced via : CodeRecall (https://coderecall.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    bool detectCapitalUse(string word) {
        int upper = 0;

        for (char c : word) {
            if (isupper(c))
                upper++;
        }

        // All uppercase
        if (upper == word.length())
            return true;

        // All lowercase
        if (upper == 0)
            return true;

        // Only first letter uppercase
        if (upper == 1 && isupper(word[0]))
            return true;

        return false;
    }
};