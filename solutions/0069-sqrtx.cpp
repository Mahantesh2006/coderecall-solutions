// ////////////////////////////////////////////////////////////
// LeetCode #69: Sqrt(x)
// Difficulty : EASY
// Pattern    : Math
// Time       : $O(\log N)$ binary search time complexity.
// Space      : $O(1)$ constant auxiliary space.
// URL        : https://leetcode.com/problems/sqrtx/
// Synced via : CodeRecall (https://code-recall-one.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    int mySqrt(int x) {
        if(x==1 or x==0)
        return x;
        int ans=0;
        int l=1,r=x;
        while(l<=r){
            long long mid=l+(r-l)/2;
            if(mid*mid == x){
                return mid;
            }
            else if(mid*mid <x){
                ans=mid;
                l=mid+1;
            }
            else{
            r=mid-1;
            }
    }
    return ans;
    }
};