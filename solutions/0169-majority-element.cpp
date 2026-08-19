// ////////////////////////////////////////////////////////////
// LeetCode #169: Majority Element
// Difficulty : EASY
// Pattern    : Array
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/majority-element/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n=arr.size();
        for(int i=0;i<n;i++){
            int cnt=0;
            for(int j=i+1;j<n;j++){
                if(arr[j]==arr[i]){
                    cnt++;
                }
            }
            if(cnt>=n/2){
                return arr[i];
            }
        }
        return {};
    }
};