// ////////////////////////////////////////////////////////////
// LeetCode #605: Can Place Flowers
// Difficulty : EASY
// Pattern    : Array
// Time       : $O(N)$ — single table sequential scan
// Space      : $O(1)$ auxiliary (result set aside)
// URL        : https://leetcode.com/problems/can-place-flowers/
// Synced via : CodeRecall (https://coderecall.vercel.app)
// ////////////////////////////////////////////////////////////

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int l=flowerbed.size();
        if(n==0){
            return true;
        }
        for(int i=0;i<l;i++){
            if(flowerbed[i]==0){
                bool left=(i==0)|| (flowerbed[i-1]==0);
                bool right=(i==l-1) || (flowerbed[i+1]==0);
                if(left && right){
                    flowerbed[i]=1;
                    n--;
                    if(n==0){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};