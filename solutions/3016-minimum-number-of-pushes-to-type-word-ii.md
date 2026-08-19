# LeetCode #3016: Minimum Number of Pushes to Type Word II

- **Difficulty**: MEDIUM
- **Pattern**: Hash Table
- **Time Complexity**: $O(N)$ linear time to count frequencies + $O(1)$ sorting of 26 letters.
- **Space Complexity**: $O(1)$ constant auxiliary space for 26 frequency buckets.
- **LeetCode URL**: https://leetcode.com/problems/minimum-number-of-pushes-to-type-word-ii/

## Intuition
To minimize the total key pushes, count the frequency of each character in word and sort them in descending order. Map the top 8 most frequent characters to key position 1 (1 push each), the next 8 to position 2 (2 pushes each), the next 8 to position 3 (3 pushes each), and the rest to position 4 (4 pushes each).

## Strategy
- 1. Create a frequency array of size 26 initialized to 0.
- 2. Traverse word and count the occurrence of each character (freq[c - "a"]++).
- 3. Sort the frequency array in descending order so highest frequency letters come first.
- 4. Loop through sorted frequencies and add freq[i] * (i / 8 + 1) to totalPushes.
- 5. Return totalPushes as the minimum number of key pushes needed.

## Optimal Solution
Why Optimized Approach Works: Assigning the most frequent letters to keys requiring only 1 push minimizes the sum of products (frequency * pushes per letter), achieving optimal total key presses in O(N) time and O(1) space.

## Complexity Analysis
- **Time**: `$O(N)$ linear time to count frequencies + $O(1)$ sorting of 26 letters.`
- **Space**: `$O(1)$ constant auxiliary space for 26 frequency buckets.`

---
*Synced automatically via [CodeRecall](https://code-recall-one.vercel.app)*
