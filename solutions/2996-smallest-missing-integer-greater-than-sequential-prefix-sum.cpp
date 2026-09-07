// ////////////////////////////////////////////////////////////
// LeetCode #2996: Smallest Missing Integer Greater Than Sequential Prefix Sum
// Difficulty : EASY
// Pattern    : Array
// Time       : $O(N)$ linear time to compute prefix sum and insert elements into hash set.
// Space      : $O(N)$ auxiliary space for hash set.
// URL        : https://leetcode.com/problems/smallest-missing-integer-greater-than-sequential-prefix-sum/
// Synced via : CodeRecall (https://coderecall.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum = nums[0];
        int i = 1;

        while (i < nums.size() && nums[i] == nums[i - 1] + 1) {
            sum += nums[i];
            i++;
        }

        unordered_set<int> st(nums.begin(), nums.end());

        while (st.count(sum)) {
            sum++;
        }

        return sum;
    }
};