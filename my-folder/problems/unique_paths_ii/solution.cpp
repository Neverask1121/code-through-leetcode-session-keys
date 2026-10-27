class Solution {
private:
    int solve(vector<vector<int>>&matrix, int m, int n, vector<vector<int>>&dp){
        if(m >= 0 && n >= 0 && matrix[m][n] == 1){
            return 0;
        }
        if(m == 0 && n == 0){
            return 1;
        }
        if(m < 0 || n < 0){
            return 0;
        }
        if(dp[m][n] != -1){
            return dp[m][n];
        }
        int right = solve(matrix, m, n-1, dp);
        int left = solve(matrix, m-1, n, dp);
        dp[m][n] = left + right;
        return left + right;
    }
public:
    int uniquePathsWithObstacles(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>>dp(m, vector<int>(n, -1));
        return solve(matrix, m-1, n-1, dp);
    }
};