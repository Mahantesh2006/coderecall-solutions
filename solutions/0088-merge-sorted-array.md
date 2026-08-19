# LeetCode #88: Merge Sorted Array

- **Difficulty**: EASY
- **Pattern**: Array
- **Time Complexity**: $O(m + n)$ - Each element from `nums1` (up to $m$ elements) and `nums2` ($n$ elements) is visited at most once during the backwards two-pointer traversal.
- **Space Complexity**: $O(1)$ - The algorithm operates completely in-place using only three integer scalar variables (`i`, `j`, `k`), requiring no auxiliary data structures or dynamic memory allocation.
- **LeetCode URL**: https://leetcode.com/problems/merge-sorted-array/

## Intuition
Merging two sorted arrays in place from left to right would overwrite unprocessed elements in nums1 because elements are constrained to be written back into the same array. The core insight is to traverse and merge from right to left (backwards), leveraging the empty buffer space at the end of nums1 to safely place the largest elements first.

## Strategy
- 1. Initialize pointer `i = m - 1` pointing to the last valid element of `nums1` and pointer `j = n - 1` pointing to the last element of `nums2`.
- 2. Initialize pointer `k = m + n - 1` pointing to the absolute last index of the combined buffer in `nums1`.
- 3. Run a while loop checking that both `i >= 0` and `j >= 0`, comparing `nums1[i]` and `nums2[j]` and placing the larger value at `nums1[k--]` while decrementing the respective source pointer.
- 4. Execute a secondary while loop to flush any remaining elements from `nums2` into `nums1` when `i` exhausts first (note: if `j` exhausts first, remaining `nums1` elements are already correctly placed).

## Optimal Solution
Single-pass iterative traversal maintaining state invariants using Array, reducing time complexity to $O(N)$ and space complexity to $O(1)$.

## Complexity Analysis
- **Time**: `$O(m + n)$ - Each element from `nums1` (up to $m$ elements) and `nums2` ($n$ elements) is visited at most once during the backwards two-pointer traversal.`
- **Space**: `$O(1)$ - The algorithm operates completely in-place using only three integer scalar variables (`i`, `j`, `k`), requiring no auxiliary data structures or dynamic memory allocation.`

---
*Synced automatically via [CodeRecall](https://code-recall-one.vercel.app)*
