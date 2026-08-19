// ////////////////////////////////////////////////////////////
// LeetCode #349: Intersection of Two Arrays
// Difficulty : EASY
// Pattern    : Array
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/intersection-of-two-arrays/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    vector<int> intersection(vector<int>& arr1, vector<int>& arr2) {
        int m=arr1.size();
        int n=arr2.size();
        int i=0;
        int j=0;
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());
        vector<int> result;
        while(i<m && j<n){
            if(arr1[i]==arr2[j]){
                result.push_back(arr1[i]);
                
                while(i<m-1 && arr1[i]==arr1[i+1] ){
                    i++;
                }
                while(j<n-1 && arr2[j]==arr2[j+1]){
                    j++;
                }
                i++;
                j++;
            }else if(arr1[i]<arr2[j]){
                i++;
            }else{
                j++;
            }
        }
        return result;
    }
};