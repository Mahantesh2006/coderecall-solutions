// ////////////////////////////////////////////////////////////
// LeetCode #59: Spiral Matrix II
// Difficulty : MEDIUM
// Pattern    : Array
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/spiral-matrix-ii/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>matrix(n,vector<int>(n));
        int top=0;
        int right=n-1;
        int bottom=n-1;
        int left=0;
        int num=1;
        while(top<=bottom && left<=right){
            for(int i=left;i<=right;i++){
                matrix[top][i]=num++;
            }
            top++;
            for(int i=top;i<=bottom;i++){
                matrix[i][right]=num++;
            }
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    matrix[bottom][i]=num++;
                }
                bottom--;
            }
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    matrix[i][left]=num++;
                }
                left++;
            }
        }
        return matrix;
    }
};