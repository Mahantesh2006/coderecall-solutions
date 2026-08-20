# LeetCode #58: Length of Last Word

- **Difficulty**: EASY
- **Pattern**: String
- **Time Complexity**: $O(N)$ linear time in worst case.
- **Space Complexity**: $O(1)$ constant auxiliary memory space.
- **LeetCode URL**: https://leetcode.com/problems/length-of-last-word/

## Intuition
Scan the string backwards starting from the end to skip trailing spaces, then count word characters until hitting a space.

## Strategy
- 1. Backward Pointer Initialization: Set i = s.length() - 1 and length = 0.
- 2. Skip Trailing Whitespace: Decrement i while i >= 0 and s[i] == " ".
- 3. Count Word Characters: Increment length and decrement i while i >= 0 and s[i] != " ".
- 4. Return Length: Stop when space or string boundary is reached and return length.

## Optimal Solution
Backward single-pass traversal skipping trailing whitespace then counting word length.

## Complexity Analysis
- **Time**: `$O(N)$ linear time in worst case.`
- **Space**: `$O(1)$ constant auxiliary memory space.`

---
*Synced automatically via [CodeRecall](https://coderecall.vercel.app)*
