// ////////////////////////////////////////////////////////////
// LeetCode #867: Transpose Matrix
// Difficulty : EASY
// Pattern    : Array
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/transpose-matrix/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>> result (n,vector<int>(m));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                result[j][i]=matrix [i][j];
            }
        }
        return result;
    }
};