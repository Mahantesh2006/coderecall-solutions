# LeetCode #205: Isomorphic Strings

- **Difficulty**: EASY
- **Pattern**: Hash Table
- **Time Complexity**: O(N) - Linear time pass through input elements.
- **Space Complexity**: O(1) - Constant auxiliary space.
- **LeetCode URL**: https://leetcode.com/problems/isomorphic-strings/

## Intuition
Count the frequency of each element or character and process them in descending order of frequency using a Hash Table or frequency array to minimize overall cost.

## Strategy
- Initialize tracking variables and state structures tailored for Isomorphic Strings.
- Apply Hash Table pattern logic to traverse and process the input elements efficiently.
- Update boundaries, invariants, and intermediate results at each step.
- Return the optimal computed result meeting all constraints.

## Optimal Solution
Counting frequencies in linear $O(N)$ time and sorting frequencies in descending order ensures the highest-frequency elements are processed with minimum cost.

## Complexity Analysis
- **Time**: `O(N) - Linear time pass through input elements.`
- **Space**: `O(1) - Constant auxiliary space.`

---
*Synced automatically via [CodeRecall](https://code-recall-one.vercel.app)*
