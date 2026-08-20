// ////////////////////////////////////////////////////////////
// LeetCode #28: Find the Index of the First Occurrence in a String
// Difficulty : EASY
// Pattern    : Two Pointers
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
// Synced via : CodeRecall (https://coderecall.vercel.app)
// ////////////////////////////////////////////////////////////

#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findTheIndexOfTheFirstOccurrenceInAString(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        int res = 0;
        while (left < right) {
            if (nums[left] < nums[right]) left++;
            else right--;
        }
        return res;
    }
};