// ////////////////////////////////////////////////////////////
// LeetCode #217: Contains Duplicate
// Difficulty : EASY
// Pattern    : Array
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/contains-duplicate/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    bool containsDuplicate(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1]){
                return true;
            }
        }
        return false;
    }
};