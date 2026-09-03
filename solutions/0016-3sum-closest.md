# LeetCode #16: 3Sum Closest

- **Difficulty**: MEDIUM
- **Pattern**: Array
- **Time Complexity**: $O(N \log N + N^2)$ — sorting takes $O(N \log N)$ and the nested loops with two pointers take $O(N^2)$ time
- **Space Complexity**: $O(1)$ — only a constant amount of extra memory is used for pointers and scalar variables
- **LeetCode URL**: https://leetcode.com/problems/3sum-closest/

## Intuition
To efficiently find three numbers whose sum is closest to the target without checking every possible combination, we can sort the array first. Sorting allows us to use a fixed element arr[i] and two inward-moving pointers (low and high) to search for the closest sum in linear time, reducing the overall complexity.

## Strategy
- Get the array size n and sort arr in ascending order using sort(arr.begin(), arr.end()).
- Initialize close to a large value (100000) to track the best sum found so far.
- Loop with index i from 0 up to n-3 to fix the first element of the triplet.
- Set low to i+1 and high to n-1 to form a two-pointer search window.
- Inside the while(low < high) loop, compute sum as arr[i] + arr[low] + arr[high].
- Compare abs(target - sum) with abs(target - close) and update close if the current sum is closer.
- Increment low if sum < target to increase the sum, otherwise decrement high to decrease the sum.
- Return the final close value after checking all valid triplets.

## Optimal Solution
The submitted code sorts arr in ascending order and iterates with index i from 0 up to n-3. For each i, it sets low to i+1 and high to n-1, calculating sum = arr[i] + arr[low] + arr[high]. If the absolute difference between target and sum is smaller than target and close, close is updated to sum, and low or high is adjusted depending on whether sum is less than target.

## Complexity Analysis
- **Time**: `$O(N \log N + N^2)$ — sorting takes $O(N \log N)$ and the nested loops with two pointers take $O(N^2)$ time`
- **Space**: `$O(1)$ — only a constant amount of extra memory is used for pointers and scalar variables`

---
*Synced automatically via [CodeRecall](https://coderecall.vercel.app)*
