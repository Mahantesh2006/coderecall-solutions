// ////////////////////////////////////////////////////////////
// LeetCode #2843: Count Symmetric Integers
// Difficulty : EASY
// Pattern    : Math
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/count-symmetric-integers/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count=0;
        for(int x=low;x<=high;x++){
            string s=to_string(x);
            int l=s.length();
            if (l%2!=0) continue;
            int n=l/2;
            int sum1=0,sum2=0;
            for(int i=0;i<n;i++){
                sum1+=s[i]-'0';
            }
            for(int i=n;i<l;i++){
                sum2+=s[i]-'0';
            }
            if(sum1==sum2)count++;
        }
        return count;
    }
};