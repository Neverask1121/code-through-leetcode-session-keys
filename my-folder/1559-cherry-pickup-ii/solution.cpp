class Solution {
private:
    int solve(vector<vector<int>>& matrix, int m, int n, int i, int j1, int j2, vector<vector<vector<int>>>&dp){
        if(j1 < 0 || j1 > n || j2 < 0 || j2 > n){
            return -1e8;
        }
        if(i == m){
            if(j1 == j2){
                return matrix[i][j1];
            }
            else{
                return matrix[i][j1] + matrix[i][j2];
            }
        }
        if(dp[i][j1][j2] != -1){
            return dp[i][j1][j2];
        }
        int maxi = -1e8;
        for(int dj1 = -1 ; dj1 <= 1 ; dj1++){
            for(int dj2 = -1 ; dj2 <= 1 ; dj2++){
                if(j1 == j2){
                    maxi = max(maxi, matrix[i][j1] + solve(matrix, m, n, i+1, j1+dj1, j2+dj2, dp));
                }
                else{
                    maxi = max(maxi, matrix[i][j1] + matrix[i][j2] + solve(matrix, m, n, i+1, j1+dj1, j2+dj2, dp));
                }
            }
        }
        dp[i][j1][j2] = maxi;
        return maxi;
    }
public:
    int cherryPickup(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int i = 0;
        int j1 = 0;
        int j2 = n-1;
        vector<vector<vector<int>>>dp(m, vector<vector<int>>(n, vector<int>(n, -1)));
        return solve(matrix, m-1, n-1, i, j1, j2, dp);
    }
};
