// ////////////////////////////////////////////////////////////
// LeetCode #75: Sort Colors
// Difficulty : MEDIUM
// Pattern    : Array
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/sort-colors/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n=arr.size();
        int low=0;
        int mid=0;
        int high=n-1;
        while(mid<=high){
            if(arr[mid]==0){
                swap(arr[mid],arr[low]);
                low++;
                mid++;
            }
            else if (arr[mid]==1){
                mid++;
            }else{
                swap(arr[mid],arr[high]);
                high--;
            }
        }
    }
};