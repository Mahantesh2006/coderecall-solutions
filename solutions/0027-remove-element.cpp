// ////////////////////////////////////////////////////////////
// LeetCode #27: Remove Element
// Difficulty : EASY
// Pattern    : Array
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/remove-element/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    int removeElement(vector<int>& arr, int val) {
        int index=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]!=val){
                arr[index]=arr[i];
                index++;
            }
        }
        return index;
    }
};