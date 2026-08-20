# LeetCode #125: Valid Palindrome

- **Difficulty**: EASY
- **Pattern**: Two Pointers
- **Time Complexity**: O(N) - Linear time pass through input elements.
- **Space Complexity**: O(1) - Constant auxiliary space.
- **LeetCode URL**: https://leetcode.com/problems/valid-palindrome/

## Intuition
By positioning left and right pointers at array boundaries and converging inwards based on value comparison, we evaluate all optimal pairs in a single linear $O(N)$ pass.

## Strategy
- Identify the key algorithmic invariant for Valid Palindrome using the Two Pointers approach.
- Initialize tracking pointers and state variables before beginning the traversal.
- Iterate through the input, applying Two Pointers boundary checks at each step.
- Return the computed result after finishing traversal.

## Optimal Solution
Two-pointer left/right boundary convergence skipping invalid candidates in linear time.

## Complexity Analysis
- **Time**: `O(N) - Linear time pass through input elements.`
- **Space**: `O(1) - Constant auxiliary space.`

---
*Synced automatically via [CodeRecall](https://coderecall.vercel.app)*
