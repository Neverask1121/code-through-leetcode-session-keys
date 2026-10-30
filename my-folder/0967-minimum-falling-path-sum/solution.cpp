class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>>dp(m, vector<int>(n, -1));
        for(int i = 0 ; i < n ; i++){
            dp[0][i] = matrix[0][i];
        }
        for(int i = 1 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                int down = dp[i-1][j];
                int down_left = 1e9;
                int down_right = 1e9;
                if(j > 0) down_left = dp[i-1][j-1];
                if(j < n-1) down_right = dp[i-1][j+1];
                dp[i][j] = matrix[i][j] + min(down, min(down_left, down_right));
            }
        }
        return *min_element(dp[m-1].begin(), dp[m-1].end());
    }
};
