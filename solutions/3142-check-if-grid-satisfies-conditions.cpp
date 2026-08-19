// ////////////////////////////////////////////////////////////
// LeetCode #3142: Check if Grid Satisfies Conditions
// Difficulty : EASY
// Pattern    : Array
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/check-if-grid-satisfies-conditions/
// Synced via : CodeRecall (https://coderecall.vercel.app)
// ////////////////////////////////////////////////////////////

#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int checkIfGridSatisfiesConditions(vector<vector<int>>& grid) {
        int rows = grid.size();
        if (rows == 0) return 0;
        int cols = grid[0].size();
        int res = 0;
        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                if (grid[r][c] == 1) {
                    res++;
                }
            }
        }
        return res;
    }
};