// ////////////////////////////////////////////////////////////
// LeetCode #415: Add Strings
// Difficulty : EASY
// Pattern    : Math
// Time       : $O(\max(N, M))$ linear time where N and M are lengths of num1 and num2.
// Space      : $O(\max(N, M))$ auxiliary space to build output string.
// URL        : https://leetcode.com/problems/add-strings/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.size() - 1;
        int j = num2.size() - 1;
        int carry = 0;
        string ans;

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;

            if (i >= 0)
                sum += num1[i--] - '0';

            if (j >= 0)
                sum += num2[j--] - '0';

            ans.push_back((sum % 10) + '0');
            carry = sum / 10;
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};