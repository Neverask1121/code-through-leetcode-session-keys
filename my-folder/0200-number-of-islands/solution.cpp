class Solution {
private:
    void bfs(vector<vector<char>>& grid, int i, int j, vector<vector<int>>& vis){
        queue<pair<int, int>>q;
        vis[i][j] = 1;
        q.push({i, j});
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            for(int i = -1 ; i < 2 ; i++){
                if(i+row<grid.size() && i+row>=0 && grid[i+row][col] == '1' && !vis[i+row][col]){
                    vis[i+row][col] = 1;
                    q.push({i+row, col});
                }
            }
            if(1+col<grid[0].size() && 1+col>=0 && grid[row][1+col] == '1' && !vis[row][1+col]){
                vis[row][1+col] = 1;
                q.push({row, 1+col});
            }
            if(-1+col<grid[0].size() && -1+col>=0 && grid[row][-1+col] == '1' && !vis[row][-1+col]){
                vis[row][-1+col] = 1;
                q.push({row, -1+col});
            }
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>vis(n, vector<int>(m, 0));
        int count = 0;
        for(int i = 0 ; i < grid.size() ; i++){
            for(int j = 0 ; j < grid[0].size() ; j++){
                if(!vis[i][j] && grid[i][j] == '1'){
                    count++;
                    bfs(grid, i, j, vis);
                }
            }
        }
        return count;
    }
};
