# LeetCode #977: Squares of a Sorted Array

- **Difficulty**: EASY
- **Pattern**: Array
- **Time Complexity**: $O(N)$ linear time single pass.
- **Space Complexity**: $O(1)$ auxiliary space excluding output vector.
- **LeetCode URL**: https://leetcode.com/problems/squares-of-a-sorted-array/

## Intuition
Since the input array is sorted, the largest squared values will reside at the extreme boundaries (far-left negative numbers or far-right positive numbers). Using two pointers at left = 0 and right = n - 1 allows us to build the sorted squared array backwards from index n - 1 down to 0 in single-pass linear time.

## Strategy
- 1. Pointer & Vector Setup: Set left = 0, right = n - 1, and instantiate result vector of size n.
- 2. Backward Array Filling: Iterate index i from n - 1 down to 0.
- 3. Absolute Comparison: Compare abs(nums[left]) with abs(nums[right]).
- 4. Element Placement: If abs(nums[left]) > abs(nums[right]), assign res[i] = nums[left]^2 and increment left. Else assign res[i] = nums[right]^2 and decrement right.
- 5. Output Extraction: Return sorted squared array res.

## Optimal Solution
Two Pointers converging inward from extreme ends, placing the larger square at the tail index in $O(N)$ time and $O(1)$ auxiliary space.

## Complexity Analysis
- **Time**: `$O(N)$ linear time single pass.`
- **Space**: `$O(1)$ auxiliary space excluding output vector.`

---
*Synced automatically via [CodeRecall](https://coderecall.vercel.app)*
