class Solution {
private:
    int solve(int n, vector<int>&costs, vector<int>& dp){
        if(n < 0){
            return 0;
        }
        if(dp[n] != -1){
            return dp[n];
        }
        int one = costs[n]+1 + solve(n-1, costs, dp);
        int two = costs[n]+4 + solve(n-2, costs, dp);
        int three = costs[n]+9 + solve(n-3, costs, dp);
        return dp[n] = min(one, min(two, three));
    }
public:
    int climbStairs(int n, vector<int>& costs) {
        vector<int>dp(n, -1);
        return solve(n-1, costs, dp);
    }
};
