// ////////////////////////////////////////////////////////////
// LeetCode #16: 3Sum Closest
// Difficulty : MEDIUM
// Pattern    : Array
// Time       : $O(N \log N + N^2)$ — sorting takes $O(N \log N)$ and the nested loops with two pointers take $O(N^2)$ time
// Space      : $O(1)$ — only a constant amount of extra memory is used for pointers and scalar variables
// URL        : https://leetcode.com/problems/3sum-closest/
// Synced via : CodeRecall (https://coderecall.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    int threeSumClosest(vector<int>& arr, int target) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int close=100000;
        for(int i=0;i<=n-3;i++){
            int low=i+1;
            int high=n-1;
            while(low<high){
                int sum=arr[i]+arr[low]+arr[high];
                if(abs(target-sum)<abs(target-close)){
                    close=sum;
                }
                if(sum<target){
                    low++;
                }else{
                    high--;
                }
            }
        }
        return close;
    }
};