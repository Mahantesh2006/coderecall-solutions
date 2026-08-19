// ////////////////////////////////////////////////////////////
// LeetCode #541: Reverse String II
// Difficulty : EASY
// Pattern    : Two Pointers
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/reverse-string-ii/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    string reverseStr(string s, int k) {
        int n=s.size();
        for(int i=0;i<n;i+=2*k){
            int left=i;
            int right=min(i+k-1,n-1);
            while(left<right){
                swap(s[left],s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};