# LeetCode #190: Reverse Bits

- **Difficulty**: EASY
- **Pattern**: Divide and Conquer
- **Time Complexity**: $O(1) - The loop executes a constant number of iterations (exactly 32 times), which is independent of the input value magnitude, resulting in constant time complexity.
- **Space Complexity**: $O(1) - Only a few primitive 32-bit unsigned integer variables (`ans`, `i`) are allocated on the stack, requiring constant auxiliary memory.
- **LeetCode URL**: https://leetcode.com/problems/reverse-bits/

## Intuition
Reversing the bits of an integer requires extracting the least significant bits of the source and appending them sequentially to a target accumulator. By shifting the accumulator left and bitwise ORing it with the extracted bit of `n`, we construct the reversed bit sequence from left to right while peeling `n` from right to left.

## Strategy
- 1. Initialize the accumulator variable `ans` to 0 to store the building reversed bits.
- 2. Execute a fixed-count loop exactly 32 times, corresponding to the 32-bit width of `uint32_t`.
- 3. Left shift `ans` by 1 to make space for the incoming bit, and bitwise OR it with the least significant bit of `n` extracted via `(n & 1)`.
- 4. Right shift `n` by 1 (`n >>= 1`) to process the next incoming bit in the subsequent iteration.
- 5. Return the finalized accumulated result `ans` once the 32-bit transformation completes.

## Optimal Solution
The bitwise operation n &= (n - 1) flips the lowest set 1-bit to 0 in each step, running in O(K) time where K is the number of 1-bits.

## Complexity Analysis
- **Time**: `$O(1) - The loop executes a constant number of iterations (exactly 32 times), which is independent of the input value magnitude, resulting in constant time complexity.`
- **Space**: `$O(1) - Only a few primitive 32-bit unsigned integer variables (`ans`, `i`) are allocated on the stack, requiring constant auxiliary memory.`

---
*Synced automatically via [CodeRecall](https://code-recall-one.vercel.app)*
