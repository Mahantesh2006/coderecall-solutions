// ////////////////////////////////////////////////////////////
// LeetCode #3016: Minimum Number of Pushes to Type Word II
// Difficulty : MEDIUM
// Pattern    : Hash Table
// Time       : $O(N)$ linear time to count frequencies + $O(1)$ sorting of 26 letters.
// Space      : $O(1)$ constant auxiliary space for 26 frequency buckets.
// URL        : https://leetcode.com/problems/minimum-number-of-pushes-to-type-word-ii/
// Synced via : CodeRecall (https://coderecall.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    int minimumPushes(string word) {
        vector<int> freq(26, 0);

        for(char c : word)
            freq[c - 'a']++;

        sort(freq.begin(), freq.end(), greater<int>());

        int ans = 0;

        for(int i = 0; i < 26; i++) {
            if(freq[i] == 0) break;

            ans += freq[i] * (i / 8 + 1);
        }

        return ans;
    }
};