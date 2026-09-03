// ////////////////////////////////////////////////////////////
// LeetCode #724: Find Pivot Index
// Difficulty : EASY
// Pattern    : Array
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/find-pivot-index/
// Synced via : CodeRecall (https://coderecall.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    int pivotIndex(vector<int>& arr) {
        int n=arr.size();
        int sum=0;
        for(int &x:arr){
            sum+=x;
        }
        int cs=0;
        for(int i=0;i<n;i++){
            int ls=cs;
            int rs=sum-cs-arr[i];
            if(ls==rs){
                return i;
            }
            cs+=arr[i];
        }
        return -1;
    }
};