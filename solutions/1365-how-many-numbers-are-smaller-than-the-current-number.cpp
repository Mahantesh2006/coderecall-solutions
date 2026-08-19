// ////////////////////////////////////////////////////////////
// LeetCode #1365: How Many Numbers Are Smaller Than the Current Number
// Difficulty : EASY
// Pattern    : Array
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n=nums.size();
        vector<int> result(n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(nums[j] < nums[i]){
                result[i]++;
                }
            }
        }
        return result;
    }
};