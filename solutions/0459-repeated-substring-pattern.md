# LeetCode #459: Repeated Substring Pattern

- **Difficulty**: EASY
- **Pattern**: String
- **Time Complexity**: $O(N)$ - Creating the doubled string takes $O(N)$, taking the substring takes $O(N)$, and searching for `s` inside `t` of length $2N-2$ takes $O(N)$ using optimized substring search algorithms like Boyer-Moore or Two-Way string matching.
- **Space Complexity**: $O(N)$ - The space complexity is dominated by the allocation of the new string `t` of length $2N$, which requires linear auxiliary space proportional to the input string length $N$.
- **LeetCode URL**: https://leetcode.com/problems/repeated-substring-pattern/

## Intuition
If a string `s` can be formed by repeating a substring, duplicating the string to form `s + s` will contain at least two instances of the original repeating sequence overlapping. By stripping away the very first and very last characters of this doubled string, we break the original terminal anchors, guaranteeing that if `s` is present in the modified `t`, it must be found purely within the interior shift.

## Strategy
- 1. Concatenate the input string `s` with itself to form the doubled string `t = s + s`.
- 2. Remove the first and last characters from `t` using `t.substr(1, t.size() - 2)` to destroy the trivial boundary matches.
- 3. Search for the occurrence of the original string `s` inside the modified string `t` using `t.find(s)`.
- 4. Return true if `t.find(s)` does not equal `string::npos`, and false otherwise.

## Optimal Solution
Sliding window expanding right boundary and shrinking left boundary in a single linear $O(N)$ pass.

## Complexity Analysis
- **Time**: `$O(N)$ - Creating the doubled string takes $O(N)$, taking the substring takes $O(N)$, and searching for `s` inside `t` of length $2N-2$ takes $O(N)$ using optimized substring search algorithms like Boyer-Moore or Two-Way string matching.`
- **Space**: `$O(N)$ - The space complexity is dominated by the allocation of the new string `t` of length $2N$, which requires linear auxiliary space proportional to the input string length $N$.`

---
*Synced automatically via [CodeRecall](https://code-recall-one.vercel.app)*
