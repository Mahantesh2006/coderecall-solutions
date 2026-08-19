// ////////////////////////////////////////////////////////////
// LeetCode #2535: Difference Between Element Sum and Digit Sum of an Array
// Difficulty : EASY
// Pattern    : Array
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elesum=0;
        int digisum=0;
        for(int x:nums){
            elesum+=x;
            while(x>0){
                digisum+=x%10;
                x/=10;
            }
        }
        return abs(elesum-digisum);
    }
};