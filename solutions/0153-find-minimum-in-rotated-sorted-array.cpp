// ////////////////////////////////////////////////////////////
// LeetCode #153: Find Minimum in Rotated Sorted Array
// Difficulty : MEDIUM
// Pattern    : Array
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    int findMin(vector<int>& arr) {
        int n=arr.size();
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            mini=min(mini,arr[i]);
        }
        return mini;
    }
};