# LeetCode #459: Repeated Substring Pattern

- **Difficulty**: EASY
- **Pattern**: String
- **Time Complexity**: O(N) - Linear time pass through input elements.
- **Space Complexity**: O(1) - Constant auxiliary space.
- **LeetCode URL**: https://leetcode.com/problems/repeated-substring-pattern/

## Intuition
Maintain a dynamic window [left, right] that expands right to include elements and shrinks left when window invariants (e.g. unique characters or target sum) are violated.

## Strategy
- Initialize tracking variables and state structures tailored for Repeated Substring Pattern.
- Apply String pattern logic to traverse and process the input elements efficiently.
- Update boundaries, invariants, and intermediate results at each step.
- Return the optimal computed result meeting all constraints.

## Optimal Solution
Sliding window expanding right boundary and shrinking left boundary in a single linear $O(N)$ pass.

## Complexity Analysis
- **Time**: `O(N) - Linear time pass through input elements.`
- **Space**: `O(1) - Constant auxiliary space.`

---
*Synced automatically via [CodeRecall](https://code-recall-one.vercel.app)*
