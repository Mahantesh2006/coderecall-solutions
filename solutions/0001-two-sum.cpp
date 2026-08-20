// ////////////////////////////////////////////////////////////
// LeetCode #1: Two Sum
// Difficulty : EASY
// Pattern    : Array
// Time       : $O(N)$ linear time complexity.
// Space      : $O(N)$ linear auxiliary space for hash map.
// URL        : https://leetcode.com/problems/two-sum/
// Synced via : CodeRecall (https://coderecall.vercel.app)
// ////////////////////////////////////////////////////////////

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if (mp.count(diff)) return {mp[diff], i};
            mp[nums[i]] = i;
        }
        return {};
    }
};