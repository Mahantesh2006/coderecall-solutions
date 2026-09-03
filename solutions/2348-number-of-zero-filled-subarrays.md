# LeetCode #2348: Number of Zero-Filled Subarrays

- **Difficulty**: MEDIUM
- **Pattern**: Array
- **Time Complexity**: $O(N)$ — one pass through the array of length N; each element processed once
- **Space Complexity**: $O(1)$ — only a constant number of scalar variables (n, result, cnt) are allocated
- **LeetCode URL**: https://leetcode.com/problems/number-of-zero-filled-subarrays/

## Intuition
The key insight is that when we encounter a sequence of consecutive zeros of length K, it contributes 1 + 2 + ... + K zero-filled subarrays to the total count. As we iterate through the array using a single loop, we can maintain the current streak of zeros in cnt and add it directly to result at each step, accumulating the subarrays on the fly without nested loops.

## Strategy
- Determine the array size n using arr.size() and initialize the accumulator result and the streak counter cnt to 0.
- Iterate through each element of arr using a for loop from i = 0 to n - 1.
- Check if arr[i] is equal to 0; if it is, increment cnt by 1, otherwise reset cnt to 0.
- Add the current streak count cnt to result in every iteration to accumulate the total number of zero-filled subarrays.
- Return the final result after the loop finishes execution.

## Optimal Solution
The submitted optimal solution iterates through the vector arr from index 0 to n-1 using a standard for loop. Whenever arr[i] is 0, we increment the consecutive counter cnt by 1, and otherwise reset cnt to 0. In every iteration, we add the current value of cnt to result, correctly tallying all zero-filled subarrays ending at the current index.

## Complexity Analysis
- **Time**: `$O(N)$ — one pass through the array of length N; each element processed once`
- **Space**: `$O(1)$ — only a constant number of scalar variables (n, result, cnt) are allocated`

---
*Synced automatically via [CodeRecall](https://coderecall.vercel.app)*
