// ////////////////////////////////////////////////////////////
// LeetCode #459: Repeated Substring Pattern
// Difficulty : EASY
// Pattern    : String
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/repeated-substring-pattern/
// Synced via : CodeRecall (https://coderecall.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string t = s + s;

        // Remove first and last character
        t = t.substr(1, t.size() - 2);

        return t.find(s) != string::npos;
    }
};