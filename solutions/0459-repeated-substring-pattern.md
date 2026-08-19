# LeetCode #459: Repeated Substring Pattern

- **Difficulty**: EASY
- **Pattern**: String
- **Time Complexity**: O(N) - Linear time pass through input elements.
- **Space Complexity**: O(1) - Constant auxiliary space.
- **LeetCode URL**: https://leetcode.com/problems/repeated-substring-pattern/

## Intuition
Maintain a dynamic window [left, right] that expands right to include elements and shrinks left when window invariants (e.g. unique characters or target sum) are violated.

## Strategy
- Identify the key algorithmic invariant for Repeated Substring Pattern using the String approach.
- Initialize tracking pointers and state variables before beginning the traversal.
- Iterate through the input, applying String boundary checks at each step.
- Return the computed result after finishing traversal.

## Optimal Solution
Sliding window expanding right boundary and shrinking left boundary in a single linear $O(N)$ pass.

## Complexity Analysis
- **Time**: `O(N) - Linear time pass through input elements.`
- **Space**: `O(1) - Constant auxiliary space.`

---
*Synced automatically via [CodeRecall](https://coderecall.vercel.app)*
