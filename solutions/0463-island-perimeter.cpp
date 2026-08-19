// ////////////////////////////////////////////////////////////
// LeetCode #463: Island Perimeter
// Difficulty : EASY
// Pattern    : Array
// Time       : $O(R \times C)$ linear time complexity over matrix dimensions.
// Space      : $O(1)$ auxiliary space complexity.
// URL        : https://leetcode.com/problems/island-perimeter/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();

        int perimeter = 0;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {

                if (grid[i][j] == 1) {

                    // Every land cell has 4 sides
                    perimeter += 4;

                    // Check bottom neighbor
                    if (i + 1 < rows && grid[i + 1][j] == 1) {
                        perimeter -= 2;
                    }

                    // Check right neighbor
                    if (j + 1 < cols && grid[i][j + 1] == 1) {
                        perimeter -= 2;
                    }
                }
            }
        }

        return perimeter;
    }
};