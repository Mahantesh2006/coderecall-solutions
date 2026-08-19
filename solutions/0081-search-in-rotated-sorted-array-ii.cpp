// ////////////////////////////////////////////////////////////
// LeetCode #81: Search in Rotated Sorted Array II
// Difficulty : MEDIUM
// Pattern    : Array
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/search-in-rotated-sorted-array-ii/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    bool search(vector<int>& arr, int target) {
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]==target){
                return true;
            }
        }
        return false;
    }
};