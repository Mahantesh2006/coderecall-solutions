// ////////////////////////////////////////////////////////////
// LeetCode #1979: Find Greatest Common Divisor of Array
// Difficulty : EASY
// Pattern    : Array
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/find-greatest-common-divisor-of-array/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    int gcd(int a,int b){
            while(b!=0){
                int temp=b;
                b=a%b;
                a=temp;
            }
            return a;
    }
    int findGCD(vector<int>& nums) {
        int mn=*min_element(nums.begin(),nums.end());
        int mx=*max_element(nums.begin(),nums.end());
        return gcd(mn,mx);
        
    }
};