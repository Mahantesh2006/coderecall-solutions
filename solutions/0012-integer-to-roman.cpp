// ////////////////////////////////////////////////////////////
// LeetCode #12: Integer to Roman
// Difficulty : MEDIUM
// Pattern    : Hash Table
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/integer-to-roman/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    string intToRoman(int num) {
        vector<pair<int, string>> roman = {
            {1000, "M"},
            {900,  "CM"},
            {500,  "D"},
            {400,  "CD"},
            {100,  "C"},
            {90,   "XC"},
            {50,   "L"},
            {40,   "XL"},
            {10,   "X"},
            {9,    "IX"},
            {5,    "V"},
            {4,    "IV"},
            {1,    "I"}
        };

        string result = "";

        for (auto &p : roman) {
            while (num >= p.first) {
                result += p.second;
                num -= p.first;
            }
        }

        return result;
    }
};