// ////////////////////////////////////////////////////////////
// LeetCode #228: Summary Ranges
// Difficulty : EASY
// Pattern    : Array
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/summary-ranges/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        int n = nums.size();
        if (n == 0) return res;

        int start = nums[0];

        for (int i = 1; i <= n; i++) {
            if (i == n || nums[i] != nums[i - 1] + 1) {
                if (start == nums[i - 1])
                    res.push_back(to_string(start));
                else
                    res.push_back(to_string(start) + "->" + to_string(nums[i - 1]));

                if (i < n) start = nums[i];
            }
        }
        return res;
    }
};