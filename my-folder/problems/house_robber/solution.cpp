class Solution {
private:
    int solve(int n, vector<int>&nums, vector<int>&dp){
        if(n == 0){
            return nums[n];
        }
        else if(n < 0){
            return 0;
        }
        if(dp[n] != -1){
            return dp[n];
        }
        //pick
        int pick = nums[n] + solve(n-2, nums, dp);
        //not pick
        int not_pick = 0 + solve(n-1, nums, dp);
        return dp[n] = max(pick, not_pick);
    }
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n, -1);
        return solve(n-1, nums, dp);
    }
};