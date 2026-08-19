# LeetCode #409: Longest Palindrome

- **Difficulty**: EASY
- **Pattern**: Hash Table
- **Time Complexity**: $O(N) - The algorithm performs a single pass over the string s of length N to populate the hash map, taking O(N) time. Subsequently, it iterates over the unique characters in the hash map (at most 52 English letters), which takes O(1) time since the alphabet size is bounded by a constant. Thus, the total time complexity is O(N).
- **Space Complexity**: $O(1) - The space is consumed by the unordered_map mp, which stores at most 52 distinct English characters (uppercase and lowercase). Since the maximum number of entries is bounded by a constant alphabet size of 52, the auxiliary space complexity is O(1).
- **LeetCode URL**: https://leetcode.com/problems/longest-palindrome/

## Intuition
To build the longest possible palindrome, we can greedily pair up characters with matching frequencies because a palindrome requires elements to mirror each other around a center. If a character appears an odd number of times, we can use the largest even portion of it in the symmetric left and right halves, and place at most one leftover odd character in the absolute center.

## Strategy
- 1. Initialize an `unordered_map<char, int> mp` to count the occurrences of every character in `s` during a linear scan.
- 2. Iterate through each character `c` in the input string `s` and increment its frequency count in `mp[c]++`.
- 3. Initialize an integer `length = 0` and a boolean flag `hasOdd = false` to track the assembly of palindrome components.
- 4. Iterate through each key-value pair `p` in `mp`: if `p.second` is even, add it entirely to `length`; if odd, add `p.second - 1` to `length` and set `hasOdd = true`.
- 5. Return `length + 1` if `hasOdd` is true to account for a single odd-frequency character placed in the center; otherwise, return `length`.

## Optimal Solution
Counting frequencies in linear $O(N)$ time and sorting frequencies in descending order ensures the highest-frequency elements are processed with minimum cost.

## Complexity Analysis
- **Time**: `$O(N) - The algorithm performs a single pass over the string s of length N to populate the hash map, taking O(N) time. Subsequently, it iterates over the unique characters in the hash map (at most 52 English letters), which takes O(1) time since the alphabet size is bounded by a constant. Thus, the total time complexity is O(N).`
- **Space**: `$O(1) - The space is consumed by the unordered_map mp, which stores at most 52 distinct English characters (uppercase and lowercase). Since the maximum number of entries is bounded by a constant alphabet size of 52, the auxiliary space complexity is O(1).`

---
*Synced automatically via [CodeRecall](https://code-recall-one.vercel.app)*
