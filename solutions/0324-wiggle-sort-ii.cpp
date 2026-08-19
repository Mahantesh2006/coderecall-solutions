// ////////////////////////////////////////////////////////////
// LeetCode #324: Wiggle Sort II
// Difficulty : MEDIUM
// Pattern    : Array
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/wiggle-sort-ii/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n=(int)nums.size();
        
        int i=1;
        int j=n-1;
        sort(nums.begin(),nums.end());
        vector<int> res(n);
        while(i<n){
            res[i]=nums[j];
            i+=2;
            j--;
        }
        i=0;
        while(i<n){
            res[i]=nums[j];
            i+=2;
            j--;
        }
        for(int k=0;k<n;k++){
            nums[k]=res[k];
        }
    }
};