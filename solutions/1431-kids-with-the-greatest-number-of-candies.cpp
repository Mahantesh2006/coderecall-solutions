// ////////////////////////////////////////////////////////////
// LeetCode #1431: Kids With the Greatest Number of Candies
// Difficulty : EASY
// Pattern    : Array
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
// Synced via : CodeRecall (https://coderecall.vercel.app)
// ////////////////////////////////////////////////////////////

#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int kidsWithTheGreatestNumberOfCandies(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans += nums[i];
        }
        return ans;
    }
};