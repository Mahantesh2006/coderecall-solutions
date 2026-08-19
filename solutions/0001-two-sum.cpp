// ////////////////////////////////////////////////////////////
// LeetCode #1: Two Sum
// Difficulty : EASY
// Pattern    : Array
// Time       : $O(N)$ linear time complexity.
// Space      : $O(N)$ linear auxiliary space for hash map.
// URL        : https://leetcode.com/problems/two-sum/
// Synced via : CodeRecall (https://coderecall.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n=arr.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]+arr[j]==target){
                    return {i,j};
                }
            }
        }
        return {};
    }
};