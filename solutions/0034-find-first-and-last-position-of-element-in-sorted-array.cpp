// ////////////////////////////////////////////////////////////
// LeetCode #34: Find First and Last Position of Element in Sorted Array
// Difficulty : MEDIUM
// Pattern    : Array
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    int firstocc(vector<int> &arr,int target){
        int n=arr.size();
        int low=0;
        int high=n-1;
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]==target){
                ans=mid;
                high=mid-1;
            }else if(arr[mid]<target){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return ans;
    }
    int lastocc(vector<int> &arr,int target){
        int n=arr.size();
        int low=0,high=n-1;
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]==target){
                ans=mid;
                low=mid+1;
            }else if(arr[mid]<target){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& arr, int target) {
        int first=firstocc(arr,target);
        if(first==-1){
            return{-1,-1};
        }
        int last=lastocc(arr,target);
        return{first,last};
    }
};