// ////////////////////////////////////////////////////////////
// LeetCode #88: Merge Sorted Array
// Difficulty : EASY
// Pattern    : Array
// Time       : $O(m + n)$ - Each element from `nums1` (up to $m$ elements) and `nums2` ($n$ elements) is visited at most once during the backwards two-pointer traversal.
// Space      : $O(1)$ - The algorithm operates completely in-place using only three integer scalar variables (`i`, `j`, `k`), requiring no auxiliary data structures or dynamic memory allocation.
// URL        : https://leetcode.com/problems/merge-sorted-array/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }

        // Copy any remaining elements from nums2
        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }
    }
};