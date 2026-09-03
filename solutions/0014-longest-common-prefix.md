# LeetCode #14: Longest Common Prefix

- **Difficulty**: EASY
- **Pattern**: Array
- **Time Complexity**: O(S) where S is the sum of all characters in all strings in strs, because in the worst case we iterate through every character of every string. In the best case, it runs in O(S_min) where S_min is the length of the shortest string.
- **Space Complexity**: O(1) auxiliary space, as only a few scalar variables (n, i, j, c) are allocated.
- **LeetCode URL**: https://leetcode.com/problems/longest-common-prefix/

## Intuition
The key insight is vertical scanning: instead of comparing whole strings at once, we compare characters column by column across all strings in the vector strs starting from the first character of strs[0]. If any string ends or has a mismatching character, the longest common prefix is immediately found up to that index using strs[0].substr(0,i).

## Strategy
- Check if strs is empty using strs.empty() and return an appropriate string if true.
- Iterate through each character index i from 0 to the length of the first string strs[0].length() using a for loop.
- Store the character at strs[0][i] in a variable c for vertical comparison across all strings.
- Iterate through the remaining strings in strs starting from index j=1 using a nested for loop.
- Check if i equals strs[j].length() or if strs[j][i] != c, and if so, return strs[0].substr(0,i).
- Return strs[0] if the loop completes without finding any mismatches, meaning strs[0] is the longest common prefix.

## Optimal Solution
Refer to solution code implementation.

## Complexity Analysis
- **Time**: `O(S) where S is the sum of all characters in all strings in strs, because in the worst case we iterate through every character of every string. In the best case, it runs in O(S_min) where S_min is the length of the shortest string.`
- **Space**: `O(1) auxiliary space, as only a few scalar variables (n, i, j, c) are allocated.`

---
*Synced automatically via [CodeRecall](https://coderecall.vercel.app)*
