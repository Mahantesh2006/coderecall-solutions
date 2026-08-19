// ////////////////////////////////////////////////////////////
// LeetCode #205: Isomorphic Strings
// Difficulty : EASY
// Pattern    : Hash Table
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/isomorphic-strings/
// Synced via : CodeRecall (https://coderecall.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mp1, mp2;

        for (int i = 0; i < s.length(); i++) {
            char a = s[i];
            char b = t[i];

            // s -> t mapping
            if (mp1.count(a) && mp1[a] != b)
                return false;

            // t -> s mapping
            if (mp2.count(b) && mp2[b] != a)
                return false;

            mp1[a] = b;
            mp2[b] = a;
        }

        return true;
    }
};