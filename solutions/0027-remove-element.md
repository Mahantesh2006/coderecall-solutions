# LeetCode #27: Remove Element

- **Difficulty**: EASY
- **Pattern**: Array
- **Time Complexity**: $O(N) - The algorithm performs a single linear scan through the input vector of size N, executing constant-time checks and assignments at each iteration, resulting in exact linear time complexity.
- **Space Complexity**: $O(1) - The algorithm uses only scalar integer variables (`index`, `n`, `i`) operating strictly in-place on the existing vector without allocating any auxiliary data structures.
- **LeetCode URL**: https://leetcode.com/problems/remove-element/

## Intuition
By maintaining two pointers—a reader pointer iterating through every element and a writer pointer tracking the next position for a valid element—we can filter out target values in a single pass without using extra memory. The core insight is that elements not equal to `val` must be compacted toward the front of the array, effectively overwriting occurrences of `val` safely.

## Strategy
- 1. Initialize a write pointer `index` to 0 and capture the array size in `n`.
- 2. Iterate through the vector `arr` from index 0 to `n - 1` using a loop variable `i`.
- 3. Check if the current element `arr[i]` is not equal to `val`.
- 4. If true, assign `arr[i]` to `arr[index]` and increment `index` by 1.
- 5. Return `index` representing the count of elements not equal to `val`.

## Optimal Solution
The submitted code implements an optimal two-pointer strategy where `i` scans through the `arr` vector and `index` tracks the write head for non-matching elements. Each time `arr[i] != val`, the element is copied to `arr[index]` and `index` is incremented, achieving linear time and constant space complexity.

## Complexity Analysis
- **Time**: `$O(N) - The algorithm performs a single linear scan through the input vector of size N, executing constant-time checks and assignments at each iteration, resulting in exact linear time complexity.`
- **Space**: `$O(1) - The algorithm uses only scalar integer variables (`index`, `n`, `i`) operating strictly in-place on the existing vector without allocating any auxiliary data structures.`

---
*Synced automatically via [CodeRecall](https://code-recall-one.vercel.app)*
