# LeetCode #191: Number of 1 Bits

- **Difficulty**: EASY
- **Pattern**: Divide and Conquer
- **Time Complexity**: $O(1)$ constant time (at most 32 bit iterations).
- **Space Complexity**: $O(1)$ constant auxiliary space.
- **LeetCode URL**: https://leetcode.com/problems/number-of-1-bits/

## Intuition
We can inspect each binary bit of the input number by repeatedly checking the lowest bit with (n & 1) and right-shifting (n >>= 1) until n becomes 0.

## Strategy
- 1. Create a variable called count initialized to 0 to hold our result.
- 2. Run a while loop that continues as long as n is non-zero (while (n)).
- 3. In each step, add the lowest bit (n & 1) to count.
- 4. Right-shift n by 1 bit (n >>= 1) to move to the next binary position.
- 5. At the end of the loop, return count as the number of set 1-bits.

## Optimal Solution
Why Optimized Approach Works: Right-shifting n by 1 bit in each iteration (n >>= 1) inspects all 32 binary bit positions in O(32) = O(1) constant time and O(1) space.

## Complexity Analysis
- **Time**: `$O(1)$ constant time (at most 32 bit iterations).`
- **Space**: `$O(1)$ constant auxiliary space.`

---
*Synced automatically via [CodeRecall](https://code-recall-one.vercel.app)*
