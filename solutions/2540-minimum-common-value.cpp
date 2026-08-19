// ////////////////////////////////////////////////////////////
// LeetCode #2540: Minimum Common Value
// Difficulty : EASY
// Pattern    : Array
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/minimum-common-value/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    int getCommon(vector<int>& arr1, vector<int>& arr2) {
        int i=0,j=0;
        int m=arr1.size();
        int n=arr2.size();
        while(i<m && j<n){
            if(arr1[i]==arr2[j]){
                return arr1[i];
            }else if(arr1[i]<arr2[j]){
                i++;
            }else{
                j++;
            }
        }
        return -1;
    }
};