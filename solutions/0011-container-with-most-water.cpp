// ////////////////////////////////////////////////////////////
// LeetCode #11: Container With Most Water
// Difficulty : MEDIUM
// Pattern    : Array
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/container-with-most-water/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    int maxArea(vector<int>& arr) {
        int n=arr.size();
        int i=0;
        int j=n-1;
        int maxwater=0;
        while(i<j){
            int h=min(arr[i],arr[j]);
            int w=j-i;
            int area=h*w;
            maxwater=max(maxwater,area);
            if(arr[i]>arr[j]){
                j--;
            }else{
                i++;
            }
        }
        return maxwater;
    }
};