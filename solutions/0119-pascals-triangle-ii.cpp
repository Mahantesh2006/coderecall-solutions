// ////////////////////////////////////////////////////////////
// LeetCode #119: Pascal's Triangle II
// Difficulty : EASY
// Pattern    : Array
// Time       : $O(K^2)$ quadratic time complexity where K is rowIndex.
// Space      : $O(K)$ space complexity for output array.
// URL        : https://leetcode.com/problems/pascals-triangle-ii/
// Synced via : CodeRecall (https://coderecall.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row(rowIndex + 1, 1);

        for (int i = 2; i <= rowIndex; i++) {
            for (int j = i - 1; j >= 1; j--) {
                row[j] += row[j - 1];
            }
        }

        return row;
    }
};