class Solution {
private:
    int climbStairs1(int n, vector<int>&dp){
        if(n<=1){
            return 1;
        }
        if(dp[n] != -1){
            return dp[n];
        }
        int left = climbStairs1(n-1, dp);
        int right = climbStairs1(n-2, dp);
        dp[n] = left+right;
        return dp[n];
    }
public:
    int climbStairs(int n) {
        vector<int>dp(n+1, -1);
        return climbStairs1(n, dp);
    }
};