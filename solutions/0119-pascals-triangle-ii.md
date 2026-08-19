# LeetCode #119: Pascal's Triangle II

- **Difficulty**: EASY
- **Pattern**: Array
- **Time Complexity**: $O(K^2)$ quadratic time complexity where K is rowIndex.
- **Space Complexity**: $O(K)$ space complexity for output array.
- **LeetCode URL**: https://leetcode.com/problems/pascals-triangle-ii/

## Intuition
Pascal's triangle row k can be computed in-place using a single 1D array of size k + 1 initialized to 1. By iterating row indices from 2 to k and updating elements backwards from right-to-left (j = i - 1 down to 1), each element row[j] is updated using row[j] + row[j - 1] without overwriting values required for the current iteration.

## Strategy
- 1. Array Allocation: Instantiate a 1D result vector/array of size (rowIndex + 1) filled with 1s.
- 2. Outer Loop Iteration: Iterate row index i from 2 up to rowIndex.
- 3. In-Place Backwards Update: Iterate column index j from i - 1 down to 1.
- 4. DP State Transition: Compute row[j] = row[j] + row[j - 1].
- 5. Output Return: Return the accumulated 1D row array.

## Optimal Solution
Single 1D array of size k + 1 updated right-to-left in-place, achieving $O(K^2)$ time and $O(K)$ space complexity ($O(1)$ extra space beyond result array).

## Complexity Analysis
- **Time**: `$O(K^2)$ quadratic time complexity where K is rowIndex.`
- **Space**: `$O(K)$ space complexity for output array.`

---
*Synced automatically via [CodeRecall](https://code-recall-one.vercel.app)*
