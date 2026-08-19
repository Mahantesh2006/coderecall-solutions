# LeetCode #415: Add Strings

- **Difficulty**: EASY
- **Pattern**: Math
- **Time Complexity**: $O(\max(N, M))$ linear time where N and M are lengths of num1 and num2.
- **Space Complexity**: $O(\max(N, M))$ auxiliary space to build output string.
- **LeetCode URL**: https://leetcode.com/problems/add-strings/

## Intuition
Simulate elementary school addition by traversing both strings right-to-left with pointers, maintaining a carry variable.

## Strategy
- 1. Initialize Pointers & Carry: Set two pointers i = num1.length - 1 and j = num2.length - 1, with carry = 0.
- 2. Loop Until Exhaustion: Iterate while i >= 0, j >= 0, or carry > 0.
- 3. Extract Digits: Set n1 = i >= 0 ? num1[i] - "0" : 0 and n2 = j >= 0 ? num2[j] - "0" : 0.
- 4. Compute Sum & Carry: Compute total = n1 + n2 + carry. Set carry = total / 10 and append total % 10 to output.
- 5. Reverse Result: Reverse accumulated result string to restore correct digit order.

## Optimal Solution
Single-pass two-pointer iteration starting from len - 1 down to 0, maintaining carry and appending digit sums.

## Complexity Analysis
- **Time**: `$O(\max(N, M))$ linear time where N and M are lengths of num1 and num2.`
- **Space**: `$O(\max(N, M))$ auxiliary space to build output string.`

---
*Synced automatically via [CodeRecall](https://code-recall-one.vercel.app)*
