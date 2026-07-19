class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int m = matrix.size();
        int n = matrix[0].size();

        int found = -1;

        for(int i = 0; i < m; i++) {
            if(matrix[i][n-1] >= target) {
                found = i;
                break;
            }
        }

        if(found == -1)
            return false;

        for(int j = 0; j < n; j++) {
            if(matrix[found][j] == target)
                return true;
        }

        return false;
    }
};