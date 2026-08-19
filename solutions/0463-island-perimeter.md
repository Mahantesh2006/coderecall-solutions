# LeetCode #463: Island Perimeter

- **Difficulty**: EASY
- **Pattern**: Array
- **Time Complexity**: $O(R \times C)$ linear time complexity over matrix dimensions.
- **Space Complexity**: $O(1)$ auxiliary space complexity.
- **LeetCode URL**: https://leetcode.com/problems/island-perimeter/

## Intuition
Each land cell grid[r][c] == 1 contributes 4 sides to the total perimeter. However, whenever two land cells share a boundary (either right neighbour grid[r][c+1] == 1 or bottom neighbour grid[r+1][c] == 1), their shared boundary removes 2 sides (1 from each cell). We can iterate through every grid cell, add 4 for each land cell, and subtract 2 for each adjacent right or bottom land neighbour.

## Strategy
- 1. Matrix Dimensions: Retrieve grid row count R and column count C.
- 2. Invariant Tracking: Initialize perimeter = 0.
- 3. Outer & Inner Loops: Iterate row r from 0 to R - 1 and column c from 0 to C - 1.
- 4. Land Cell Evaluation: If grid[r][c] == 1, add 4 to perimeter.
- 5. Right Neighbor Check: If c + 1 < C and grid[r][c+1] == 1, subtract 2.
- 6. Bottom Neighbor Check: If r + 1 < R and grid[r+1][c] == 1, subtract 2.
- 7. Return Output: Return the final accumulated perimeter.

## Optimal Solution
Direct 2D matrix single pass with boundary edge deduction in $O(R \times C)$ time and $O(1)$ extra space.

## Complexity Analysis
- **Time**: `$O(R \times C)$ linear time complexity over matrix dimensions.`
- **Space**: `$O(1)$ auxiliary space complexity.`

---
*Synced automatically via [CodeRecall](https://coderecall.vercel.app)*
