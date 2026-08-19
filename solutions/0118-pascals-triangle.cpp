// ////////////////////////////////////////////////////////////
// LeetCode #118: Pascal's Triangle
// Difficulty : EASY
// Pattern    : Array
// Time       : $O(N^2) - The outer loop runs numRows times (N), and the inner loop executes i times for each row i. The total number of operations is the sum of the first N integers: 1 + 2 + ... + N = \frac{N(N+1)}{2}, which simplifies asymptotically to O(N^2).
// Space      : $O(N^2) - The space complexity is determined by the total number of elements stored in the 2D vector ans. Storing N rows containing a total of \frac{N(N+1)}{2} integers requires O(N^2) memory (excluding the output container requirement, this is optimal space for storing the full triangle).
// URL        : https://leetcode.com/problems/pascals-triangle/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        for (int i = 0; i < numRows; i++) {
            vector<int> row(i + 1, 1);

            for (int j = 1; j < i; j++) {
                row[j] = ans[i - 1][j - 1] + ans[i - 1][j];
            }

            ans.push_back(row);
        }

        return ans;
    }
};