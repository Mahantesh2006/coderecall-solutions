// ////////////////////////////////////////////////////////////
// LeetCode #1074: Number of Submatrices That Sum to Target
// Difficulty : HARD
// Pattern    : Array
// Time       : $O(C^2 \cdot R)$ time where $R$ is rows and $C$ is columns.
// Space      : $O(R)$ auxiliary space for the prefix frequency hash map.
// URL        : https://leetcode.com/problems/number-of-submatrices-that-sum-to-target/
// Synced via : CodeRecall (https://coderecall.vercel.app)
// ////////////////////////////////////////////////////////////

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int r = matrix.size();
        int c = matrix[0].size();

        for (int i = 0; i < r; i++) {
            for (int j = 1; j < c; j++) {
                matrix[i][j] += matrix[i][j - 1];
            }
        }

        int count = 0;
        for (int c1 = 0; c1 < c; c1++) {
            for (int c2 = c1; c2 < c; c2++) {
                unordered_map<int, int> mp;
                mp[0] = 1;
                int sum = 0;

                for (int row = 0; row < r; row++) {
                    int val = matrix[row][c2] - (c1 > 0 ? matrix[row][c1 - 1] : 0);
                    sum += val;
                    if (mp.find(sum - target) != mp.end()) {
                        count += mp[sum - target];
                    }
                    mp[sum]++;
                }
            }
        }

        return count;
    }
};