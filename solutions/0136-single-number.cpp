// ////////////////////////////////////////////////////////////
// LeetCode #136: Single Number
// Difficulty : EASY
// Pattern    : Array
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/single-number/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result=0;
        for(int i:nums){
            result ^= i;
        }
        return result;
    }
};