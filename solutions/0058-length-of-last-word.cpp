// ////////////////////////////////////////////////////////////
// LeetCode #58: Length of Last Word
// Difficulty : EASY
// Pattern    : String
// Time       : $O(N)$ linear time in worst case.
// Space      : $O(1)$ constant auxiliary memory space.
// URL        : https://leetcode.com/problems/length-of-last-word/
// Synced via : CodeRecall (https://coderecall.vercel.app)
// ////////////////////////////////////////////////////////////

#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        int i = s.length() - 1;
        while (i >= 0 && s[i] == ' ') i--;
        while (i >= 0 && s[i] != ' ') {
            length++;
            i--;
        }
        return length;
    }
};