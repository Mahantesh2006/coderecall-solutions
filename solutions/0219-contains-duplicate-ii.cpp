// ////////////////////////////////////////////////////////////
// LeetCode #219: Contains Duplicate II
// Difficulty : EASY
// Pattern    : Array
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/contains-duplicate-ii/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& arr, int k) {
        int n=arr.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            if(mp.find(arr[i]) !=mp.end() && abs(mp[arr[i]]-i) <=k){
                return true;
            }else{
                mp[arr[i]]=i;
            }
        }
        return false;
    }
};