// ////////////////////////////////////////////////////////////
// LeetCode #1991: Find the Middle Index in Array
// Difficulty : EASY
// Pattern    : Array
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/find-the-middle-index-in-array/
// Synced via : CodeRecall (https://coderecall.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    int findMiddleIndex(vector<int>& arr) {
        int n=arr.size();
        int totsum=0;
        for(int num:arr){
            totsum+=num;
        }
        int lefts=0;
        for(int i=0;i<n;i++){
            int rights=totsum-lefts-arr[i];
            if(lefts==rights){
                return i;
            }
            lefts+=arr[i];
        }
        return -1;
    }
};