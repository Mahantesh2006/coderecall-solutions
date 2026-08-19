// ////////////////////////////////////////////////////////////
// LeetCode #27: Remove Element
// Difficulty : EASY
// Pattern    : Array
// Time       : $O(N) - The algorithm performs a single linear scan through the input vector of size N, executing constant-time checks and assignments at each iteration, resulting in exact linear time complexity.
// Space      : $O(1) - The algorithm uses only scalar integer variables (`index`, `n`, `i`) operating strictly in-place on the existing vector without allocating any auxiliary data structures.
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