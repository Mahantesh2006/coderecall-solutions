// ////////////////////////////////////////////////////////////
// LeetCode #509: Fibonacci Number
// Difficulty : EASY
// Pattern    : Math
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/fibonacci-number/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    int fib(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        int a=0;
        int b=1;
        for(int i=2;i<=n;i++){
            int c=a+b;
            a=b;
            b=c;
        }
        return b;
    }
};