// ////////////////////////////////////////////////////////////
// LeetCode #189: Rotate Array
// Difficulty : MEDIUM
// Pattern    : Array
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/rotate-array/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    void rotate(vector<int>& arr, int k) {
        int n=arr.size();
        if(n==0){
            return;
        }
        
        k=k%n;
        vector<int> temp(k);
        for(int i=n-k;i<n;i++){
            temp[i-n+k]=arr[i];
        }
        for(int i=n-k-1;i>=0;i--){
            arr[i+k]=arr[i];
        }
        for(int i=0;i<k;i++){
            arr[i]=temp[i];
        }
    }
};