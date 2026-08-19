# LeetCode #344: Reverse String

- **Difficulty**: EASY
- **Pattern**: Two Pointers
- **Time Complexity**: O(N) - Linear time pass through input elements.
- **Space Complexity**: O(1) - Constant auxiliary space.
- **LeetCode URL**: https://leetcode.com/problems/reverse-string/

## Intuition
By positioning left and right pointers at array boundaries and converging inwards based on value comparison, we evaluate all optimal pairs in a single linear $O(N)$ pass.

## Strategy
- Initialize tracking variables and state structures tailored for Reverse String.
- Apply Two Pointers pattern logic to traverse and process the input elements efficiently.
- Update boundaries, invariants, and intermediate results at each step.
- Return the optimal computed result meeting all constraints.

## Optimal Solution
Two-pointer left/right boundary convergence skipping invalid candidates in linear time.

## Complexity Analysis
- **Time**: `O(N) - Linear time pass through input elements.`
- **Space**: `O(1) - Constant auxiliary space.`

---
*Synced automatically via [CodeRecall](https://code-recall-one.vercel.app)*
