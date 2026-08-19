// ////////////////////////////////////////////////////////////
// LeetCode #541: Reverse String II
// Difficulty : EASY
// Pattern    : Two Pointers
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/reverse-string-ii/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
// ////////////////////////////////////////////////////////////

#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int reverseStringIi(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        int res = 0;
        while (left < right) {
            if (nums[left] < nums[right]) left++;
            else right--;
        }
        return res;
    }
};