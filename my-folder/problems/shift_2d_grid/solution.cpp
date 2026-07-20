class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size(), n = grid[0].size();
        k %= (m * n);  // optional optimization

        while (k--) {
            vector<vector<int>> vec(m, vector<int>(n, 0));

            for (int i = 0; i < m; ++i) {
                for (int j = 0; j < n; ++j) {
                    if (j < n - 1) {
                        vec[i][j + 1] = grid[i][j];
                    } else {  // j == n-1
                        if (i < m - 1) {
                            vec[i + 1][0] = grid[i][j];
                        } else {  // last row, last column
                            vec[0][0] = grid[i][j];
                        }
                    }
                }
            }
            grid = vec;  // update for next shift
        }
        return grid;
    }
};