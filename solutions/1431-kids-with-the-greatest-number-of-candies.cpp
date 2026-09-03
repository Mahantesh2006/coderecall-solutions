// ////////////////////////////////////////////////////////////
// LeetCode #1431: Kids With the Greatest Number of Candies
// Difficulty : EASY
// Pattern    : Array
// Time       : O(N) - Linear time pass through input elements.
// Space      : O(1) - Constant auxiliary space.
// URL        : https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
// Synced via : CodeRecall (https://coderecall.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        vector<bool> result(n,false);
        int maxx=*max_element(candies.begin(),candies.end());
        for(int i=0;i<n;i++){
            if(candies[i]+extraCandies>=maxx){
                result[i]=true;
            }
        }
        return result;
    }
};