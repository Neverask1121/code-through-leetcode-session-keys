class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int>ans(m);
        for(int i=0;i<n;i++){
            for(int j =0;j<m;j++){
                ans[j]+=matrix[i][j];
            }
        }
        return ans;
    }
};