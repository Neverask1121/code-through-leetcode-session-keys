class Solution {
private:
    void dfs(vector<vector<int>>& image, int sr, int sc, int color, vector<vector<int>>& ans, int iniColor, int delR[], int delC[]){
        ans[sr][sc]=color;
        int m = image.size();
        int n = image[0].size();
        for(int i = 0 ; i < 4 ; i++){
            int nrow = sr+delR[i];
            int ncol = sc+delC[i];
            if(ncol>=0&&ncol<n&&nrow>=0&&nrow<m&&ans[nrow][ncol]!=color&&image[nrow][ncol]==iniColor){
                dfs(image, nrow, ncol, color, ans, iniColor, delR, delC);
            }
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>>ans = image;
        int iniColor = image[sr][sc];
        int delR[] = {-1, 0, 1, 0};
        int delC[] = {0, -1, 0, 1};
        dfs(image, sr, sc, color, ans, iniColor, delR, delC);
        return ans;
    }
};
