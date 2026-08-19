// ////////////////////////////////////////////////////////////
// LeetCode #2007: Find Original Array From Doubled Array
// Difficulty : MEDIUM
// Pattern    : Array
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/find-original-array-from-doubled-array/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    vector<int> findOriginalArray(vector<int>& arr) {
        int n=arr.size();
        if(n%2!=0){
            return {};
        }
        sort(arr.begin(),arr.end());
        unordered_map<int,int> mpp;
        for(int &x:arr){
            mpp[x]++;
        }
        vector<int> ans;
        for(int &x:arr){
            int twice=2*x;
            if(mpp[x]==0) continue;
            if(mpp.find(twice)==mpp.end() || mpp[twice]==0){
                return {};
            }
            ans.push_back(x);
            mpp[x]--;
            mpp[twice]--;
        }
        return ans;
    }
};