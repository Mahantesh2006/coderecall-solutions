// ////////////////////////////////////////////////////////////
// LeetCode #3658: GCD of Odd and Even Sums
// Difficulty : EASY
// Pattern    : Math
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/gcd-of-odd-and-even-sums/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
// ////////////////////////////////////////////////////////////

#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int gcdOfOddAndEvenSums(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans += nums[i];
        }
        return ans;
    }
};