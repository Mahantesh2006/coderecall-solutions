// ////////////////////////////////////////////////////////////
// LeetCode #202: Happy Number
// Difficulty : EASY
// Pattern    : Hash Table
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/happy-number/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    
    int sumofsq(int n){
            int sum=0;
            while(n>0){
                int digit=n%10;
                sum+=digit*digit;
                n/=10;
            }
            return sum;
    }
    bool isHappy(int n) {
        unordered_set<int> seen;
        while(n!=1){
            
            if(seen.count(n)){
                return false;
            }
            seen.insert(n);
            n=sumofsq(n);
        }
    return true;
    }
};