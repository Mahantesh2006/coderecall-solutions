// ////////////////////////////////////////////////////////////
// LeetCode #2348: Number of Zero-Filled Subarrays
// Difficulty : MEDIUM
// Pattern    : Array
// Time       : $O(N)$ — one pass through the array of length N; each element processed once
// Space      : $O(1)$ — only a constant number of scalar variables (n, result, cnt) are allocated
// URL        : https://leetcode.com/problems/number-of-zero-filled-subarrays/
// Synced via : CodeRecall (https://coderecall.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    long long zeroFilledSubarray(vector<int>& arr) {
        int n=arr.size();
        long long result=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                cnt=cnt+1;
            }else{
                cnt=0;
            }
            result=result+cnt;
        }
        return result;
    }
};