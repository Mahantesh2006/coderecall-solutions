# LeetCode #1: Two Sum

- **Difficulty**: EASY
- **Pattern**: Array
- **Time Complexity**: $O(N)$ linear time complexity.
- **Space Complexity**: $O(N)$ linear auxiliary space for hash map.
- **LeetCode URL**: https://leetcode.com/problems/two-sum/

## Intuition
Store previously seen elements and their indices in a hash map. For each element nums[i], check if target - nums[i] already exists in the map.

## Strategy
- 1. Hash Map Instantiation: Initialize an empty hash map (seen) mapping element values to their array indices.
- 2. Single-Pass Iteration: Iterate through nums with index i and element num.
- 3. Complement Search: Compute complement = target - num.
- 4. Match Check & Insertion: If complement exists in seen, return [seen[complement], i]. Otherwise, store seen[num] = i.
- 5. Default Return: Return empty array if no valid pair is found.

## Optimal Solution
One-pass Hash Map lookup reducing search complexity to O(1) time per element.

## Complexity Analysis
- **Time**: `$O(N)$ linear time complexity.`
- **Space**: `$O(N)$ linear auxiliary space for hash map.`

---
*Synced automatically via [CodeRecall](https://coderecall.vercel.app)*
