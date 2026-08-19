// ////////////////////////////////////////////////////////////
// LeetCode #2873: Maximum Value of an Ordered Triplet I
// Difficulty : EASY
// Pattern    : Array
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/maximum-value-of-an-ordered-triplet-i/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    long long maximumTripletValue(vector<int>& arr) {
        int n=arr.size();
        long long ans=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    ans=max(ans,1LL*(arr[i]-arr[j])*arr[k]);
                }
            }
        }
        return ans;
    }
};