// ////////////////////////////////////////////////////////////
// LeetCode #896: Monotonic Array
// Difficulty : EASY
// Pattern    : Array
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/monotonic-array/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    bool isMonotonic(vector<int>& arr) {
        int n=arr.size();
        bool inc=false;
        bool dec=false;
        for(int i=0;i<n-1;i++){
            if(arr[i]<arr[i+1]){
                inc=true;
            }
            if(arr[i]>arr[i+1]){
                dec=true;
            }
        }
        if(inc==true && dec==true){
            return false;
        }
        return true;
    }
};