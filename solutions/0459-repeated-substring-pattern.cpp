// ////////////////////////////////////////////////////////////
// LeetCode #459: Repeated Substring Pattern
// Difficulty : EASY
// Pattern    : String
// Time       : $O(N)$ - Creating the doubled string takes $O(N)$, taking the substring takes $O(N)$, and searching for `s` inside `t` of length $2N-2$ takes $O(N)$ using optimized substring search algorithms like Boyer-Moore or Two-Way string matching.
// Space      : $O(N)$ - The space complexity is dominated by the allocation of the new string `t` of length $2N$, which requires linear auxiliary space proportional to the input string length $N$.
// URL        : https://leetcode.com/problems/repeated-substring-pattern/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
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