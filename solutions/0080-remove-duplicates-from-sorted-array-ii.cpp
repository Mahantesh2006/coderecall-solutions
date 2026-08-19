// ////////////////////////////////////////////////////////////
// LeetCode #80: Remove Duplicates from Sorted Array II
// Difficulty : MEDIUM
// Pattern    : Array
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int n = nums.size();
        if (n <= 2) return n;  // Already valid

        int j = 2;  // Start from index 2

        for (int i = 2; i < n; i++) {
            if (nums[i] != nums[j - 2]) {
                nums[j] = nums[i];
                j++;
            }
        }

        return j; // number of elements allowed (each max twice)
    }
};