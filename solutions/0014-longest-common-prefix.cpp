// ////////////////////////////////////////////////////////////
// LeetCode #14: Longest Common Prefix
// Difficulty : EASY
// Pattern    : Array
// Time       : O(S) where S is the sum of all characters in all strings in strs, because in the worst case we iterate through every character of every string. In the best case, it runs in O(S_min) where S_min is the length of the shortest string.
// Space      : O(1) auxiliary space, as only a few scalar variables (n, i, j, c) are allocated.
// URL        : https://leetcode.com/problems/longest-common-prefix/
// Synced via : CodeRecall (https://coderecall.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if(strs.empty()) return " ";
        for(int i=0;i<strs[0].length();i++){
            char c=strs[0][i];
            for(int j=1;j<strs.size();j++){
                if(i==strs[j].length() || strs[j][i]!=c)
                return strs[0].substr(0,i);
            }
        }
        return strs[0];
    }
};