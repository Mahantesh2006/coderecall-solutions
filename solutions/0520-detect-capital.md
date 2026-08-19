# LeetCode #520: Detect Capital

- **Difficulty**: EASY
- **Pattern**: String
- **Time Complexity**: O(N) - Linear time pass through input elements.
- **Space Complexity**: O(1) - Constant auxiliary space.
- **LeetCode URL**: https://leetcode.com/problems/detect-capital/

## Intuition
To solve Detect Capital optimally, we apply String state analysis to eliminate redundant evaluations and achieve linear asymptotic performance.

## Strategy
- 1. Parse Inputs (Detect Capital): Initialize tracking variables for counting or storing state.
- 2. Apply String Pattern: Iterate through input elements, applying String rules to compute values.
- 3. Update Invariants: Adjust pointer boundaries or update state at each iteration.
- 4. Return Result: Return the computed final answer.

## Optimal Solution
Single-pass iterative traversal maintaining state invariants using String, reducing time complexity to $O(N)$ and space complexity to $O(1)$.

## Complexity Analysis
- **Time**: `O(N) - Linear time pass through input elements.`
- **Space**: `O(1) - Constant auxiliary space.`

---
*Synced automatically via [CodeRecall](https://code-recall-one.vercel.app)*
