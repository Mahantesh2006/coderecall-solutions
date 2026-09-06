// ////////////////////////////////////////////////////////////
// LeetCode #4: Median of Two Sorted Arrays
// Difficulty : HARD
// Pattern    : Array
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/median-of-two-sorted-arrays/
// Synced via : CodeRecall (https://coderecall.vercel.app)
// ////////////////////////////////////////////////////////////

// Striver's Optimal Reference Solution: Median of Two Sorted Arrays
// Pattern: Binary Search | Time: O(log N) | Space: O(1)
class Solution {
public:
    int medianOfTwoSortedArrays(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return -1;
    }
};