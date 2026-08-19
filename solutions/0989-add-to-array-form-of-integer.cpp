// ////////////////////////////////////////////////////////////
// LeetCode #989: Add to Array-Form of Integer
// Difficulty : EASY
// Pattern    : Array
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/add-to-array-form-of-integer/
// Synced via : CodeRecall (https://coderecall.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int i = num.size() - 1;

        while (i >= 0 && k > 0) {
            int sum = num[i] + k;

            num[i] = sum % 10;
            k = sum / 10;
            i--;
        }

        while (k > 0) {
            num.insert(num.begin(), k % 10);
            k /= 10;
        }

        return num;
    }
};