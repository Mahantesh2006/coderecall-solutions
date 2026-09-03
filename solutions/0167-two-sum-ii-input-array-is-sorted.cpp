// ////////////////////////////////////////////////////////////
// LeetCode #167: Two Sum II - Input Array Is Sorted
// Difficulty : MEDIUM
// Pattern    : Array
// Time       : $O(N)$ — single table sequential scan
// Space      : $O(1)$ auxiliary (result set aside)
// URL        : https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
// Synced via : CodeRecall (https://coderecall.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n=arr.size();
        int low=0;
        int high=n-1;
        while(low<high){
            int sum=arr[low]+arr[high];
            if(sum==target){
                return{low+1,high+1};
            }else if(sum<target){
                low++;
            }else{
                high--;
            }
        }
        return {};
    }
};