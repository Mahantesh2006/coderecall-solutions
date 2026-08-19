# LeetCode #205: Isomorphic Strings

- **Difficulty**: EASY
- **Pattern**: Hash Table
- **Time Complexity**: O(N) - Linear time pass through input elements.
- **Space Complexity**: O(1) - Constant auxiliary space.
- **LeetCode URL**: https://leetcode.com/problems/isomorphic-strings/

## Intuition
To solve Isomorphic Strings optimally, we apply Hash Table state analysis to eliminate redundant evaluations and achieve linear asymptotic performance.

## Strategy
- 1. Parse Inputs (Isomorphic Strings): Initialize tracking variables for counting or storing state.
- 2. Apply Hash Table Pattern: Iterate through input elements, applying Hash Table rules to compute values.
- 3. Update Invariants: Adjust pointer boundaries or update state at each iteration.
- 4. Return Result: Return the computed final answer.

## Optimal Solution
Counting frequencies in linear $O(N)$ time and sorting frequencies in descending order ensures the highest-frequency elements are processed with minimum cost.

## Complexity Analysis
- **Time**: `O(N) - Linear time pass through input elements.`
- **Space**: `O(1) - Constant auxiliary space.`

---
*Synced automatically via [CodeRecall](https://code-recall-one.vercel.app)*
