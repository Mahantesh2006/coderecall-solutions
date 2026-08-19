// ////////////////////////////////////////////////////////////
// LeetCode #283: Move Zeroes
// Difficulty : EASY
// Pattern    : Array
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/move-zeroes/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp(n);
        int x = 0;

        for(int i = 0; i < n; i++){
            if(nums[i] != 0)
                temp[x++] = nums[i];
        }
        nums = temp;
    }
};