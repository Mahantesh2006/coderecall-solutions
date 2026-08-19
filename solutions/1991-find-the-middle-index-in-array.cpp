// ////////////////////////////////////////////////////////////
// LeetCode #1991: Find the Middle Index in Array
// Difficulty : EASY
// Pattern    : Array
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/find-the-middle-index-in-array/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
// ////////////////////////////////////////////////////////////

#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findTheMiddleIndexInArray(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans += nums[i];
        }
        return ans;
    }
};