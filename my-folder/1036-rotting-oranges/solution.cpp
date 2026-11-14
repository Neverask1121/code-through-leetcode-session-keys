class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        queue<pair<pair<int, int>, int>>q;
        int delR[] = {-1, 0, 1, 0};
        int delC[] = {0, 1, 0, -1};
        int vis[m][n];
        int t = 0;
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(grid[i][j] == 2){
                    q.push({{i, j}, t});
                    vis[i][j]=2;
                }
                else{
                    vis[i][j]=0;
                }
            }
        }
        int time=0;
        while(!q.empty()){
            int row=q.front().first.first;
            int col=q.front().first.second;
            int tm = q.front().second;
            q.pop();
            time = max(time, tm);
            for(int i = 0 ; i < 4 ; i++){
                int nrow = row+delR[i];
                int ncol = col+delC[i];
                if(nrow<m&&nrow>=0&&ncol<n&&ncol>=0&&vis[nrow][ncol]==0&&grid[nrow][ncol]==1){
                    vis[nrow][ncol]=2;
                    q.push({{nrow, ncol}, tm+1});
                }
            }
        }
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(vis[i][j]!=2&&grid[i][j]==1){
                    return -1;
                }
            }
        }
        return time;
    }
};
