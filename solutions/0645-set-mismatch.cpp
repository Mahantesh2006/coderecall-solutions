// ////////////////////////////////////////////////////////////
// LeetCode #645: Set Mismatch
// Difficulty : EASY
// Pattern    : Array
// Time       : $O(N)$ — single table sequential scan
// Space      : $O(1)$ auxiliary (result set aside)
// URL        : https://leetcode.com/problems/set-mismatch/
// Synced via : CodeRecall (https://coderecall.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int dup=-1,miss=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                dup=nums[i];
            }else if(nums[i]>(nums[i-1]+1)){
                miss=(nums[i-1]+1);
            }
            }
            if(nums[0]!=1)
                miss=1;
            
            else if(nums.back()!=nums.size())
                miss=nums.size();
            
        return {dup,miss};
    }
};