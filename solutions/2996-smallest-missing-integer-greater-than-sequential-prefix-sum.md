# LeetCode #2996: Smallest Missing Integer Greater Than Sequential Prefix Sum

- **Difficulty**: EASY
- **Pattern**: Array
- **Time Complexity**: $O(N)$ linear time to compute prefix sum and insert elements into hash set.
- **Space Complexity**: $O(N)$ auxiliary space for hash set.
- **LeetCode URL**: https://leetcode.com/problems/smallest-missing-integer-greater-than-sequential-prefix-sum/

## Intuition
Find the maximum sequential prefix starting at nums[0] where nums[i] == nums[i-1] + 1. Sum elements in this prefix. Insert all array numbers into a hash set. Starting from the prefix sum, increment while the value is present in the set.

## Strategy
- 1. Initialize sum = nums[0] and iterate while i < nums.size() && nums[i] == nums[i-1] + 1, adding nums[i] to sum.
- 2. Store all elements of nums into an unordered_set.
- 3. While st.count(sum) is true, increment sum.
- 4. Return sum.

## Optimal Solution
One pass to find the sequential prefix sum O(N). Hash set for O(1) membership checks. Increment sum until not found.

## Complexity Analysis
- **Time**: `$O(N)$ linear time to compute prefix sum and insert elements into hash set.`
- **Space**: `$O(N)$ auxiliary space for hash set.`

---
*Synced automatically via [CodeRecall](https://coderecall.vercel.app)*
