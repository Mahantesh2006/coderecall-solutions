# LeetCode #409: Longest Palindrome

- **Difficulty**: EASY
- **Pattern**: Hash Table
- **Time Complexity**: O(N) - Linear time pass through input elements.
- **Space Complexity**: O(1) - Constant auxiliary space.
- **LeetCode URL**: https://leetcode.com/problems/longest-palindrome/

## Intuition
Count the frequency of each element or character and process them in descending order of frequency using a Hash Table or frequency array to minimize overall cost.

## Strategy
- Identify the key algorithmic invariant for Longest Palindrome using the Hash Table approach.
- Initialize tracking pointers and state variables before beginning the traversal.
- Iterate through the input, applying Hash Table boundary checks at each step.
- Return the computed result after finishing traversal.

## Optimal Solution
Counting frequencies in linear $O(N)$ time and sorting frequencies in descending order ensures the highest-frequency elements are processed with minimum cost.

## Complexity Analysis
- **Time**: `O(N) - Linear time pass through input elements.`
- **Space**: `O(1) - Constant auxiliary space.`

---
*Synced automatically via [CodeRecall](https://coderecall.vercel.app)*
