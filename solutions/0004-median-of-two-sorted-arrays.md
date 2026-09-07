# LeetCode #4: Median of Two Sorted Arrays

- **Difficulty**: HARD
- **Pattern**: Array
- **Time Complexity**: $O(\log(\min(M, N)))$ logarithmic time by binary searching the smaller array.
- **Space Complexity**: $O(1)$ constant auxiliary space.
- **LeetCode URL**: https://leetcode.com/problems/median-of-two-sorted-arrays/

## Intuition
Instead of merging the two arrays in O(M + N) time, we can perform binary search on the partition of the smaller array. We divide both arrays into left and right halves such that the total number of elements on the left equals the total on the right (or +1 for odd lengths), and every element on the left is <= every element on the right.

## Strategy
- 1. Ensure nums1 is the smaller array (if not, swap arguments so binary search runs on the shorter array).
- 2. Binary search on range [0, m] for partitionX = (left + right) / 2.
- 3. Compute partitionY = (m + n + 1) / 2 - partitionX.
- 4. Identify boundary values maxLeftX, minRightX, maxLeftY, minRightY using INT_MIN / INT_MAX for edges.
- 5. If valid partition found: if even length return average of max(lefts) and min(rights); if odd return max(lefts).
- 6. Adjust binary search boundaries: if maxLeftX > minRightY move left, else move right.

## Optimal Solution
Binary search on the smaller array to find the valid partition point. Check if maxLeftX <= minRightY and maxLeftY <= minRightX. If so, compute median from partition boundary elements in O(log(min(M, N))) time and O(1) auxiliary space.

## Complexity Analysis
- **Time**: `$O(\log(\min(M, N)))$ logarithmic time by binary searching the smaller array.`
- **Space**: `$O(1)$ constant auxiliary space.`

---
*Synced automatically via [CodeRecall](https://coderecall.vercel.app)*
