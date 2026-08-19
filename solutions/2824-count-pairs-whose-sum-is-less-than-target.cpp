// ////////////////////////////////////////////////////////////
// LeetCode #2824: Count Pairs Whose Sum is Less than Target
// Difficulty : EASY
// Pattern    : Array
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/count-pairs-whose-sum-is-less-than-target/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    int countPairs(vector<int>& arr, int target) {
        int n=arr.size();
        int l=0;
        int r=n-1;
        int cnt=0;
        sort(arr.begin(),arr.end());
        while(l<r){
            if(arr[l]+arr[r]<target){
                cnt+=(r-l);
                l++;
            }else{
                r--;
            }
        }
        return cnt;
    }
};