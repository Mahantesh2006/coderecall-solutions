// ////////////////////////////////////////////////////////////
// LeetCode #961: N-Repeated Element in Size 2N Array
// Difficulty : EASY
// Pattern    : Array
// Time       : $O(N)$ — the loop runs at most N times, and within each iteration, a constant number of bound checks and comparisons are performed.
// Space      : $O(1)$ — no extra data structures or memory are allocated beyond the input vector nums.
// URL        : https://leetcode.com/problems/n-repeated-element-in-size-2n-array/
// Synced via : CodeRecall (https://coderecall.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                return nums[i];
            }
            if(i+2 <n && nums[i]==nums[i+2]){
                return nums[i];
            }

            if(i+3 <n && nums[i]==nums[i+3]){
                return nums[i];
            }
        }
        return -1;
    }
};