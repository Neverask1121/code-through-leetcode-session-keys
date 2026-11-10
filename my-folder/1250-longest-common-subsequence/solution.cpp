class Solution {
  private:
    int solve(string &str1, string &str2, int n, int m, vector<vector<int>>& dp){
        if(n < 0 || m < 0){
            return 0;
        }
        if(dp[n][m] != -1){
            return dp[n][m];
        }
        if(str1[n] == str2[m]){
            return dp[n][m] = 1 + solve(str1, str2, n-1, m-1, dp);
        }
        return dp[n][m] = max(solve(str1, str2, n-1, m, dp), solve(str1, str2, n, m-1, dp));
    }
  public:
    int longestCommonSubsequence(string str1, string str2) {
        int n = str1.length();
        int m = str2.length();
        vector<vector<int>>dp(n, vector<int>(m, -1));
        return solve(str1, str2, n-1, m-1, dp);
    }
};

