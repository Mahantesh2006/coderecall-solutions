# LeetCode #69: Sqrt(x)

- **Difficulty**: EASY
- **Pattern**: Math
- **Time Complexity**: $O(\log N)$ binary search time complexity.
- **Space Complexity**: $O(1)$ constant auxiliary space.
- **LeetCode URL**: https://leetcode.com/problems/sqrtx/

## Intuition
The square root of a number n will always lie between 1 and n. So, we can search in this range to find the largest integer x such that square of x is less than or equal to number n.

## Strategy
- 1. Start by creating a variable called ans to hold the result and set search range low = 1, high = x.
- 2. While low <= high, compute mid = low + (high - low) / 2.
- 3. While the square of current number is less than or equal to x, keep updating ans with mid (low = mid + 1).
- 4. As soon as the square of the number becomes greater than x, stop searching that right half (high = mid - 1).
- 5. At the end, the value stored in ans will be the integer square root of x.

## Optimal Solution
Why Optimized Approach Works: Binary search reduces the search range by half in each step, finding the floor square root in O(log x) time with O(1) space.

## Complexity Analysis
- **Time**: `$O(\log N)$ binary search time complexity.`
- **Space**: `$O(1)$ constant auxiliary space.`

---
*Synced automatically via [CodeRecall](https://code-recall-one.vercel.app)*
