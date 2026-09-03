# LeetCode #961: N-Repeated Element in Size 2N Array

- **Difficulty**: EASY
- **Pattern**: Array
- **Time Complexity**: $O(N)$ — the loop runs at most N times, and within each iteration, a constant number of bound checks and comparisons are performed.
- **Space Complexity**: $O(1)$ — no extra data structures or memory are allocated beyond the input vector nums.
- **LeetCode URL**: https://leetcode.com/problems/n-repeated-element-in-size-2n-array/

## Intuition
Since the array of size 2N contains one element repeated N times and N+1 unique values, the pigeonhole principle guarantees that the repeated element must appear very close to itself. By checking distances of 1, 2, and 3 indices away in the loop, we are guaranteed to catch the target element without needing a hash map or sorting.

## Strategy
- Initialize the integer n to store the size of the input vector nums.
- Loop through the vector nums with index i running from 0 up to n-1.
- Check if the adjacent elements nums[i] and nums[i+1] are equal, and return nums[i] if true.
- Check if i+2 is within bounds and if nums[i] equals nums[i+2], returning nums[i] if true.
- Check if i+3 is within bounds and if nums[i] equals nums[i+3], returning nums[i] if true.
- Return -1 as a fallback if no match is found, though the problem constraints guarantee a return inside the loop.

## Optimal Solution
The submitted code iterates through the vector nums from index i=0 to n-2. At each iteration, it checks if nums[i] matches nums[i+1], nums[i+2], or nums[i+3]. Due to the density of the repeated element in the array, at least one of these adjacent or nearby comparisons will evaluate to true and immediately return nums[i].

## Complexity Analysis
- **Time**: `$O(N)$ — the loop runs at most N times, and within each iteration, a constant number of bound checks and comparisons are performed.`
- **Space**: `$O(1)$ — no extra data structures or memory are allocated beyond the input vector nums.`

---
*Synced automatically via [CodeRecall](https://coderecall.vercel.app)*
