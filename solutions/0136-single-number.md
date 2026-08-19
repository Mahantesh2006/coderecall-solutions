# LeetCode #136: Single Number

- **Difficulty**: EASY
- **Pattern**: Array
- **Time Complexity**: O(N) - Linear time pass through input elements.
- **Space Complexity**: O(1) - Constant auxiliary space.
- **LeetCode URL**: https://leetcode.com/problems/single-number/

## Intuition
Bitwise operations operate directly on binary representations. Using n &= (n - 1) clears the lowest set 1-bit in O(1) time without extra memory.

## Strategy
- Initialize tracking variables and state structures tailored for Single Number.
- Apply Array pattern logic to traverse and process the input elements efficiently.
- Update boundaries, invariants, and intermediate results at each step.
- Return the optimal computed result meeting all constraints.

## Optimal Solution
The bitwise operation n &= (n - 1) flips the lowest set 1-bit to 0 in each step, running in O(K) time where K is the number of 1-bits.

## Complexity Analysis
- **Time**: `O(N) - Linear time pass through input elements.`
- **Space**: `O(1) - Constant auxiliary space.`

---
*Synced automatically via [CodeRecall](https://code-recall-one.vercel.app)*
