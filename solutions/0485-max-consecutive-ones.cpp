// ////////////////////////////////////////////////////////////
// LeetCode #485: Max Consecutive Ones
// Difficulty : EASY
// Pattern    : Array
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/max-consecutive-ones/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxc=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
            count++;
            maxc=max(maxc,count);
            }else{
                count=0;
            }
        }
        return maxc;
    }
};