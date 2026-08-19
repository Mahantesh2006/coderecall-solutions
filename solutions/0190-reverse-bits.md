# LeetCode #190: Reverse Bits

- **Difficulty**: EASY
- **Pattern**: Divide and Conquer
- **Time Complexity**: O(N) - Linear time pass through input elements.
- **Space Complexity**: O(1) - Constant auxiliary space.
- **LeetCode URL**: https://leetcode.com/problems/reverse-bits/

## Intuition
Bitwise operations operate directly on binary representations. Using n &= (n - 1) clears the lowest set 1-bit in O(1) time without extra memory.

## Strategy
- Identify the key algorithmic invariant for Reverse Bits using the Divide and Conquer approach.
- Initialize tracking pointers and state variables before beginning the traversal.
- Iterate through the input, applying Divide and Conquer boundary checks at each step.
- Return the computed result after finishing traversal.

## Optimal Solution
The bitwise operation n &= (n - 1) flips the lowest set 1-bit to 0 in each step, running in O(K) time where K is the number of 1-bits.

## Complexity Analysis
- **Time**: `O(N) - Linear time pass through input elements.`
- **Space**: `O(1) - Constant auxiliary space.`

---
*Synced automatically via [CodeRecall](https://coderecall.vercel.app)*
