# LeetCode #1074: Number of Submatrices That Sum to Target

- **Difficulty**: HARD
- **Pattern**: Array
- **Time Complexity**: $O(C^2 \cdot R)$ time where $R$ is rows and $C$ is columns.
- **Space Complexity**: $O(R)$ auxiliary space for the prefix frequency hash map.
- **LeetCode URL**: https://leetcode.com/problems/number-of-submatrices-that-sum-to-target/

## Intuition
Reduce the 2D problem to 1D: compute prefix sums along each row. Then, for each pair of columns (c1, c2), calculate the row segment sums and apply the classic 1D "Subarray Sum Equals K" hash map technique.

## Strategy
- 1. Row Prefix Sums: Replace each element matrix[i][j] with the prefix sum of row i up to column j.
- 2. Fix Two Columns: Use two nested loops for column bounds c1 and c2 (0 <= c1 <= c2 < cols).
- 3. 1D Hash Map Accumulator: For each column pair, initialize an unordered_map with {0: 1} and running sum = 0.
- 4. Submatrix Sum Query: For each row, get segment sum = matrix[row][c2] - (c1 > 0 ? matrix[row][c1-1] : 0). Add to running sum.
- 5. Match & Increment: If (sum - target) exists in map, add its frequency to total count. Increment map[sum].

## Optimal Solution
Fix column pairs (c1, c2) in O(C²) iterations. Compress row sums between c1 and c2, then use an unordered hash map to find submatrices summing to target in O(R) time per pair. Overall time: O(C² · R).

## Complexity Analysis
- **Time**: `$O(C^2 \cdot R)$ time where $R$ is rows and $C$ is columns.`
- **Space**: `$O(R)$ auxiliary space for the prefix frequency hash map.`

---
*Synced automatically via [CodeRecall](https://coderecall.vercel.app)*
